////============================================================================
//// Name        : BinarySearchTree.cpp
//// Author      :
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <iostream>
//using namespace std;
//#include "BinarySearchTree.h"
//#include <assert.h>
////Part 1
////getRoot(), isEmpty, insert
//
///*********************************************************
// *    Constructors, Destructors & Copy Constructor       *
// *********************************************************/
//template <class bstdata>
//BST<bstdata>::BST() : root(NULL){}
//
//template <class bstdata>
//BST<bstdata>::~BST()
//{
//	destructorHelper(root);
//}
//
//
///*********PRIVATE HELPERS****************/
//
//template <class bstdata>
//void BST<bstdata>::insertHelper(NodePtr root, bstdata value)
//{
//    //base case
//	if(value == root->data)
//	{
//		cout << "insert helper data" << endl;
//		return;
//	}
//
//	else if(value < root->data)
//	{
//
//		if(root->left == NULL)
//		{
//
//			root->left = new Node(value);
//		}
//		else
//		{
//
//			insertHelper(root->left, value);
//		}
//	}
//
//	else
//	{
//
//		if(root->right == NULL)
//		{
//			root->right = new Node(value);
//		}
//		else
//		{
//			insertHelper(root->right, value);
//		}
//	}
//
//}
//
//template <class bstdata>
//bstdata BST<bstdata>::maximumHelper(NodePtr root)
//{
//	if(root->right != NULL)
//	{
//		return maximumHelper(root->right);
//	}
//	else
//	{
//		return root->data;
//	}
//}
//
//template <class bstdata>
//bstdata BST<bstdata>::minimumHelper(NodePtr root)
//{
//	if(root->left != NULL)
//	{
//		return minimumHelper(root->left);
//	}
//	else
//	{
//		return root->data;
//	}
//}
//
////template <class bstdata>
////int BST<bstdata>::getSizeHelper(NodePtr root, int& size)
////{
////	if(root != NULL)
////	{
////		size++;
////		getSizeHelper(root->right, size);
////		size++;
////		getSizeHelper(root->left, size);
////	}
////	else
////	{
////		return size;
////	}
////}
//
//template <class bstdata>
//int BST<bstdata>::getHeightHelper(NodePtr root)
//{
//	if(root == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int left_height = getHeightHelper(root->left);
//		int right_height = getHeightHelper(root->right);
//		if(left_height > right_height)
//		{
//			return left_height + 1;
//		}
//		else
//		{
//			return right_height + 1;
//		}
//	}
//}
//
//template <class bstdata>
//bool BST<bstdata>::findHelper(NodePtr root, bstdata value)
//{
//	if(value == root->data)
//	{
//		return true;
//	}
//	else if(value < root->data)
//	{
//		if(root->left == NULL)
//		{
//			return false;
//		}
//		else
//		{
//			findHelper(root->left, value);
//		}
//	}
//	else
//	{
//		if(root->right == NULL)
//		{
//			return false;
//		}
//		else
//		{
//			findHelper(root->right, value);
//		}
//	}
//}
//
///********************************************************
// *                   ACCESS FUNCTIONS                   *
// ********************************************************/
//template <class bstdata>
//bstdata BST<bstdata>::getRoot()
//{
//	assert(root != NULL);
//	return root->data;
//}
//
//template <class bstdata>
//bool BST<bstdata>::isEmpty()
//{
//	return root == NULL;
//}
//
//template <class bstdata>
//void BST<bstdata>::inOrderPrint()
//{
//	if(root == NULL)
//	{
//		cout << " " << endl;
//	}
//	inOrderPrintHelper(root);
//	cout << endl;
//}
//
//template <class bstdata>
//void BST<bstdata>::preOrderPrint()
//{
//	if(root == NULL)
//	{
//		cout << " " << endl;
//	}
//	preOrderPrintHelper(root);
//	cout << endl;
//}
//
//template <class bstdata>
//void BST<bstdata>::postOrderPrint()
//{
//	if(root == NULL)
//	{
//		cout << " " << endl;
//	}
//	postOrderPrintHelper(root);
//	cout << endl;
//}
//
//template <class bstdata>
//bstdata BST<bstdata>::maximum()
//{
//	assert(!isEmpty());
//	return maximumHelper(root);
//}
//
//template <class bstdata>
//bstdata BST<bstdata>::minimum()
//{
//	assert(!isEmpty());
//	return minimumHelper(root);
//}
//
////template <class bstdata>
////int BST<bstdata>::getSize()
////{
//////	int size = 0;
////	return getSizeHelper(root, 0);
////}
//
//template <class bstdata>
//int BST<bstdata>::getHeight()
//{
//	if(root == NULL)
//	{
//		return -1;
//	}
//	else
//	{
//		return getHeightHelper(root);
//	}
//}
//
//template <class bstdata>
//bool BST<bstdata>::find(bstdata value)
//{
//	assert(!isEmpty());
//	return findHelper(root, value);
//}
//template <class bstdata>
//void BST<bstdata>::inOrderPrintHelper(NodePtr root)
//{
//	if(root!= NULL)
//	{
//		inOrderPrintHelper(root->left);
//		cout << root->data;
//		inOrderPrintHelper(root->right);
//	}
//
//}
//
//template <class bstdata>
//void BST<bstdata>::preOrderPrintHelper(NodePtr root)
//{
//	if(root!= NULL)
//	{
//		cout << root->data;
//		inOrderPrintHelper(root->left);
//		inOrderPrintHelper(root->right);
//	}
//
//}
//
//template <class bstdata>
//void BST<bstdata>::postOrderPrintHelper(NodePtr root)
//{
//	if(root!= NULL)
//	{
//		inOrderPrintHelper(root->left);
//		inOrderPrintHelper(root->right);
//		cout << root->data;
//	}
//
//}
//
//template<class bstdata>
//
//void BST<bstdata>::destructorHelper(NodePtr root)
//{
//	if(root!= NULL)
//	{
//		destructorHelper(root->left);
//		destructorHelper(root->right);
//		delete root;
//	}
//}
//
///********************************************
// *         MANIPULATORS FUNCTIONS           *
// ********************************************/
//template <class bstdata>
//void BST<bstdata>::insert(bstdata value)
//{
//
//    if (root == NULL)
//    {
//        root = new Node(value); //if the tree is empty insert the value at the root
//    }
//
//    else
//    {
//        insertHelper(root, value); //otherwise call the helper function, passing it the root
//    }
//
//}
