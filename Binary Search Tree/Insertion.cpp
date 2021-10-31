#include <iostream>
using namespace std;

class BST
{
	int data;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	
	BST(int);// Parameterized constructor

	
	BST* Insert(BST*, int);// Insert function.

	
	void Inorder(BST*);// Inorder traversal.
};


BST ::BST()// Default Constructor definition.
	: data(0)
	, left(NULL)
	, right(NULL)
{
}


BST ::BST(int value)// Parameterized Constructor definition.
{
	data = value;
	left = right = NULL;
}


BST* BST ::Insert(BST* root, int value)// Insert function definition.
{
	if (!root)
	{
		
		return new BST(value);// Insert the first node, if root is NULL.
	}

	// Insert data.
	if (value > root->data)
	{
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else
	{
		// Insert left node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.


// Driver code
int main()
{
	BST b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);


	return 0;
}

