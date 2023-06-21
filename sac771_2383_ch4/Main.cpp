#include <iostream>
#include <chrono>
#include "compFuncs.cpp"


using namespace std;
int dozenRand();
int twoDozenRand();
int twoHundredRand();
int thouToOneRand();
int oneToThouRand();

int main()
{
	dozenRand();
	twoDozenRand();
	twoHundredRand();
	thouToOneRand();
	oneToThouRand();
	return 0;
}

int dozenRand()
{
	LinkedList LL;
	BST b;

	int maxCount = 12;
	int maxRandom = 1001;

	/*Linked List*/
	srand(time(nullptr));
	auto startTimeList = chrono::high_resolution_clock::now();
	for (int i = 0; i < maxCount; i++)
	{
		LL.append(rand() % maxRandom);
	}
	auto endTimeList = chrono::high_resolution_clock::now();
	auto listDuration = chrono::duration_cast<chrono::microseconds>(endTimeList - startTimeList);
	long listMS = listDuration.count();
	cout << "Linked List: ";
	LL.display(cout);
	cout << "\nduration of inserting into a Linked List: " << listMS << " microseconds" << endl;
	int listSearch;
	cout << "input a number to search in the LL: ";
	cin >> listSearch;
	auto startTimeX = chrono::high_resolution_clock::now();
	cout << "Is " << listSearch << " in the Linked List? " << LL.find(listSearch);
	auto endTimeX = chrono::high_resolution_clock::now();
	auto durationX = chrono::duration_cast<chrono::microseconds>(endTimeX - startTimeX);
	long msX = durationX.count();
	cout << "\nTime taken to search for " << listSearch << " in LL: " << msX << " microseconds" << endl;


	/*Binary Search Tree*/
	auto startTimeTree = chrono::high_resolution_clock::now();
	for (int i = 0; i < maxCount; i++)
	{
		b.insert(rand() % maxRandom);
	}
	auto endTimeTree = chrono::high_resolution_clock::now();
	auto treeDuration = chrono::duration_cast<chrono::microseconds>(endTimeTree - startTimeTree);
	long TreeMS = treeDuration.count();
	cout << "BST: ";
	b.inOrder(cout);
	cout << "\nduration of inserting into a BST: " << TreeMS << " microseconds" << endl;
	int treeSearch;
	cout << "input a number to search for in the Tree: ";
	cin >> treeSearch;
	auto startTimeY = chrono::high_resolution_clock::now();
	cout << "Is " << treeSearch << " in the Tree? " << b.find(treeSearch);
	auto endTimeY = chrono::high_resolution_clock::now();
	auto durationY = chrono::duration_cast<chrono::microseconds>(endTimeY - startTimeY);
	long msY = durationY.count();
	cout << "\nTime taken to search for " << treeSearch << " in BST: " << msY << " microseconds" << endl;

	return 0;
}

int twoDozenRand()
{
	LinkedList LL;
	BST b;

	int maxCount = 24;
	int maxRandom = 1001;
	srand(time(nullptr));

	/*Linked List*/
	auto startTimeList = chrono::high_resolution_clock::now();
	for (int i = 0; i < maxCount; i++)
	{
		LL.append(rand() % maxRandom);
	}
	auto endTimeList = chrono::high_resolution_clock::now();
	auto listDuration = chrono::duration_cast<chrono::microseconds>(endTimeList - startTimeList);
	long listMS = listDuration.count();
	cout << "Linked List: ";
	LL.display(cout);
	cout << "\nduration of inserting into a Linked List: " << listMS << " microseconds" << endl;
	int listSearch;
	cout << "input a number to search in the LL: ";
	cin >> listSearch;
	auto startTimeX = chrono::high_resolution_clock::now();
	cout << "is " << listSearch << " in the linked list? " << LL.find(listSearch);
	auto endTimeX = chrono::high_resolution_clock::now();
	auto durationX = chrono::duration_cast<chrono::microseconds>(endTimeX - startTimeX);
	long msX = durationX.count();
	cout << "\nTime taken to search for " << listSearch << " in LL: " << msX << " microseconds" << endl;


	/*Binary Search Tree*/
	auto startTimeTree = chrono::high_resolution_clock::now();
	for (int i = 0; i < maxCount; i++)
	{
		b.insert(rand() % maxRandom);
	}
	auto endTimeTree = chrono::high_resolution_clock::now();
	auto treeDuration = chrono::duration_cast<chrono::microseconds>(endTimeTree - startTimeTree);
	long TreeMS = treeDuration.count();
	cout << "BST: ";
	b.inOrder(cout);
	cout << "\nduration of inserting into a BST: " << TreeMS << " microseconds" << endl;
	int treeSearch;
	cout << "input a number to search for in the Tree: ";
	cin >> treeSearch;
	auto startTimeY = chrono::high_resolution_clock::now();
	cout << "is " << treeSearch << " in the tree? " << b.find(treeSearch);
	auto endTimeY = chrono::high_resolution_clock::now();
	auto durationY = chrono::duration_cast<chrono::microseconds>(endTimeY - startTimeY);
	long msY = durationY.count();
	cout << "\nTime taken to search for " << treeSearch << " in BST: " << msY << " microseconds" << endl;

	return 0;
}

int twoHundredRand()
{
	LinkedList LL;
	BST b;

	int maxCount = 200;
	int maxRandom = 1001;

	srand(time(nullptr));

	
	/*Linked List*/
	auto startTimeList = chrono::high_resolution_clock::now();

	for (int i = 0; i < maxCount; i++)
	{
		LL.append(rand() % maxRandom);
	}
	auto endTimeList = chrono::high_resolution_clock::now();
	auto listDuration = chrono::duration_cast<chrono::microseconds>(endTimeList - startTimeList);
	long listMS = listDuration.count();
	cout << "Linked List: ";
	LL.display(cout);
	cout << "\nduration of inserting into a Linked List: " << listMS << " microseconds" << endl;
	int listSearch;
	cout << "input a number to search in the LL: ";
	cin >> listSearch;
	auto startTimeX = chrono::high_resolution_clock::now();
	cout << "is " << listSearch << " in the linked list? " << LL.find(listSearch);
	auto endTimeX = chrono::high_resolution_clock::now();
	auto durationX = chrono::duration_cast<chrono::microseconds>(endTimeX - startTimeX);
	long msX = durationX.count();
	cout << "\nTime taken to search for " << listSearch << " in LL: " << msX << " microseconds" << endl;


	/*Binary Search Tree*/
	auto startTimeTree = chrono::high_resolution_clock::now();
	for (int i = 0; i < maxCount; i++)
	{
		b.insert(rand() % maxRandom);
	}
	auto endTimeTree = chrono::high_resolution_clock::now();
	auto treeDuration = chrono::duration_cast<chrono::microseconds>(endTimeTree - startTimeTree);
	long TreeMS = treeDuration.count();
	cout << "BST: ";
	b.inOrder(cout);
	cout << "\nduration of inserting into a BST: " << TreeMS << " microseconds" << endl;
	int treeSearch;
	cout << "input a number to search for in the Tree: ";
	cin >> treeSearch;
	auto startTimeY = chrono::high_resolution_clock::now();
	cout << "Is " << treeSearch << " in the Tree? " << b.find(treeSearch);
	auto endTimeY = chrono::high_resolution_clock::now();
	auto durationY = chrono::duration_cast<chrono::microseconds>(endTimeY - startTimeY);
	long msY = durationY.count();
	cout << "\nTime taken to search for " << treeSearch << " in BST: " << msY << " microseconds" << endl;

	return 0;
}

int thouToOneRand()
{
	LinkedList LL;
	BST b;

	srand(time(nullptr));

	int maxCount = 1000;
	int maxRandom = 1001;

	/*Linked List*/
	auto startTimeList = chrono::high_resolution_clock::now();
	for (int i = maxCount; i > 0; i--)
	{
		LL.append(i);
	}
	auto endTimeList = chrono::high_resolution_clock::now();
	auto listDuration = chrono::duration_cast<chrono::microseconds>(endTimeList - startTimeList);
	long listMS = listDuration.count();
	cout << "Linked List: ";
	LL.display(cout);
	cout << "\nduration of inserting into a Linked List: " << listMS << " microseconds" << endl;
	int listSearch;
	cout << "input a number to search in the LL: ";
	cin >> listSearch;
	auto startTimeX = chrono::high_resolution_clock::now();
	cout << "Is " << listSearch << " in the Linked List? " << LL.find(listSearch);
	auto endTimeX = chrono::high_resolution_clock::now();
	auto durationX = chrono::duration_cast<chrono::microseconds>(endTimeX - startTimeX);
	long msX = durationX.count();
	cout << "\nTime taken to search for " << listSearch << " in LL: " << msX << " microseconds" << endl;



	/*Binary Search Tree*/
	auto startTimeTree = chrono::high_resolution_clock::now();
	for (int i = maxCount; i > 0; i--)
	{
		b.insert(i);
	}
	auto endTimeTree = chrono::high_resolution_clock::now();
	auto treeDuration = chrono::duration_cast<chrono::microseconds>(endTimeTree - startTimeTree);
	long TreeMS = treeDuration.count();
	cout << "BST: ";
	b.preOrder(cout);
	cout << "\nduration of inserting into a BST: " << TreeMS << " microseconds" << endl;
	int treeSearch;
	cout << "input a number to search for in the Tree: ";
	cin >> treeSearch;
	auto startTimeY = chrono::high_resolution_clock::now();
	cout << "Is " << treeSearch << " in the Tree? " << b.find(treeSearch);
	auto endTimeY = chrono::high_resolution_clock::now();
	auto durationY = chrono::duration_cast<chrono::microseconds>(endTimeY - startTimeY);
	long msY = durationY.count();
	cout << "\nTime taken to search for " << treeSearch << " in BST: " << msY << " microseconds" << endl;

	return 0;
}

int oneToThouRand()
{
	LinkedList LL;
	BST b;

	srand(time(nullptr));

	int maxCount = 1001;
	int maxRandom = 1001;

	/*Linked List*/
	auto startTimeList = chrono::high_resolution_clock::now();
	for (int i = 1; i < maxCount; i++)
	{
		LL.append(i);
	}
	auto endTimeList = chrono::high_resolution_clock::now();
	auto listDuration = chrono::duration_cast<chrono::microseconds>(endTimeList - startTimeList);
	long listMS = listDuration.count();
	cout << "Linked List: ";
	LL.display(cout);
	cout << "\nduration of inserting into a Linked List: " << listMS << " microseconds" << endl;
	int listSearch;
	cout << "input a number to search in the LL: ";
	cin >> listSearch;
	auto startTimeX = chrono::high_resolution_clock::now();
	cout << "Is " << listSearch << " in the Linked List? " << LL.find(listSearch);
	auto endTimeX = chrono::high_resolution_clock::now();
	auto durationX = chrono::duration_cast<chrono::microseconds>(endTimeX - startTimeX);
	long msX = durationX.count();
	cout << "\nTime taken to search for " << listSearch << " in LL: " << msX << " microseconds" << endl;



	/*Binary Search Tree*/
	auto startTimeTree = chrono::high_resolution_clock::now();
	for (int i = 1; i < maxCount; i++)
	{
		b.insert(i);
	}
	auto endTimeTree = chrono::high_resolution_clock::now();
	auto treeDuration = chrono::duration_cast<chrono::microseconds>(endTimeTree - startTimeTree);
	long TreeMS = treeDuration.count();
	cout << "BST: ";
	b.inOrder(cout);
	cout << "\nduration of inserting into a BST: " << TreeMS << " microseconds" << endl;
	int treeSearch;
	cout << "input a number to search for in the Tree: ";
	cin >> treeSearch;
	auto startTimeY = chrono::high_resolution_clock::now();
	cout << "Is " << treeSearch << " in the Tree? " << b.find(treeSearch);
	auto endTimeY = chrono::high_resolution_clock::now();
	auto durationY = chrono::duration_cast<chrono::microseconds>(endTimeY - startTimeY);
	long msY = durationY.count();
	cout << "\nTime taken to search for " << treeSearch << " in BST: " << msY << " microseconds" << endl;

	return 0;
}