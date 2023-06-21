#include "comp.h"
#include <iostream>
#include <chrono>

using namespace std;


LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList()
{
    Node *tmp = head;

    while (tmp != nullptr)
    {
        head = head->next;

        delete tmp;

        tmp = head;
    }

    tail = nullptr;
}

ostream &operator<<(ostream &os, LinkedList &right)
{
    right.display(os);

    return os;
}

void LinkedList::append(int data)
{
    Node *tmp = new Node(data);

    if (head == nullptr)
    {
        head = tmp;
    }
    else
    {
        tail->next = tmp;
    }

    tail = tmp;
}

void LinkedList::prepend(int data)
{
    Node *tmp = new Node(data);

    if (head == nullptr)
    {
        tail = tmp;
    }

    tmp->next = head;

    head = tmp;
}

void LinkedList::display(ostream &os)
{
    Node *tmp = head;

    while (tmp != nullptr)
    {
        os << tmp->data << " ";

        tmp = tmp->next;
    }
}

bool LinkedList::remove(int data)
{
    Node *tmp = head;
    Node *prev = nullptr;

    while (tmp != nullptr)
    {

        if (tmp->data == data)
        {
            head = tmp->next;

            if (tmp == head)
            {
                head = tmp->next;
            }
            else
            {
                prev->next = tmp->next;
            }
            if (tmp == tail)
            {
                tail = prev;
            }

            delete tmp;

            return true;
        }

        prev = tmp;
        tmp = tmp->next;
    }

    return false;
}

bool BST::find(Node *node, int data)
{
    if (node == nullptr)
    {
        return false;
    }

    if (data < node->data)
    {
        return find(node->left, data);
    }

    if (data > node->data)
    {
        return find(node->right, data);
    }

return true; 
}

bool BST::insert(Node*& node, int data)
{
    if (node == nullptr) 
    { 
        node = new Node(data); 
        return true; 
    }
    if (data < node->data) return insert(node->left, data);
    if (data > node->data) return insert(node->right, data);
    return false;
}

bool BST::remove(Node*& node, int data)
{
    Node childNode;
    if (node == nullptr)  return false;
    if (data < node->data) return remove(node->left, data);
    if (data > node->data) return remove(node->right, data);

    int deg = childNode.degree(node);

    if(deg == 0)
    {
        delete node;
        node = nullptr;
    }

    else if (deg ==1)
    {
        Node* tmp = node;
        if (node->left != nullptr)
        {
            node = node->left;
        }

        else
        {
            node = node->right;
        }

        delete tmp;
    }

    else if (deg == 2)
    {
        Node* tmp = node->left;
        while(node->right != nullptr)
        {
            tmp = tmp->right;
        }

        node->data = tmp->data;
        remove(node->left, tmp->data);
    }

    return true;
}

void BST::postOrder(Node* node, ostream& os)//LRN
{
    if (node == nullptr) return;
    postOrder(node->left, os);
    postOrder(node->right, os);
    os << node->data << " ";
}
void BST::preOrder(Node* node, ostream& os) //NLR
{
    if (node == nullptr) return;
    os << node->data << " ";
    preOrder(node->left, os);
    preOrder(node->right, os);  
}
void BST::inOrder(Node* node, ostream& os) //LNR
{
    if (node == nullptr) return;
    inOrder(node->left, os);
    os << node->data << " ";
    inOrder(node->right, os);  
}