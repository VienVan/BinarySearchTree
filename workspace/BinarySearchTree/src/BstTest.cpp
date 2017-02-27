

#include <iostream>
#include "BinarySearchTree.h"
//#include "Book.h"
using namespace std;

int main()
{
	BST<int> B1;
	cout << "Should print out true" << endl;
	if(B1.isEmpty())
	{
		cout << "true";
	}
	else
		cout << "false";

	B1.insert(5);
	cout << "Get Root: Should print out 5: " << B1.getRoot() << endl;
	cout << "Get Height: Should print out 1: " << B1.getHeight() << endl;
	B1.insert(6);
	cout << "InorderPrint: Should print out 56: ";
	B1.inOrderPrint();
	B1.insert(7);
	cout << "InOrderprint: Should print out 567: ";
	B1.inOrderPrint();
	cout << "Should print out false: " << endl;


	if(B1.isEmpty())
	{
			cout << "true";
	}
	else
	{
		cout << "false" << endl;
	}
	B1.insert(4);
	B1.insert(2);
	B1.insert(1);

	cout << "InOrderPrint: Should print out 124567" << endl;
	B1.inOrderPrint();
	cout << "Minimum: Should print out 1: " << B1.minimum() << endl;
	cout << "Maximum: Should print out 7: " << B1.maximum() << endl;
	cout << "PreOrderPrint: Should print out 512467: " << endl;
	B1.preOrderPrint();
	cout << "PostOrderprint Should print out 124675: " << endl;
	B1.postOrderPrint();
	cout << "GetHeight: Should print out 4: " << B1.getHeight() << endl;
	cout << "Should print out false: ";
	if(B1.find(9))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "Should print out true: ";
	if(B1.find(5))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "Should print out 1234675: ";
	B1.postOrderPrint();
	B1.remove(1);
	cout << "Should print out 234675: ";
	B1.postOrderPrint();
	B1.remove(5);
	cout << "Should print out 2476: ";
	B1.postOrderPrint();
	B1.remove(6);
	cout << "Should print out 247: ";
	B1.postOrderPrint();
	B1.remove(7);
	B1.remove(4);
	cout << "Should print out 2: " << B1.getRoot();


	return 0;
}



