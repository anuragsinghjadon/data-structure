#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node * left;
    Node* right;
    Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};


class Solution {
    public:

  	void preOrder(Node *root) {

      	if( root == NULL )
          	return;

      	std::cout << root->data << " ";

      	preOrder(root->left);
      	preOrder(root->right);
    }
};


        Node * insertdata(Node * root , int data)
{
    Node * node;
    node = new Node(data);
    if (root == NULL)
    {
        root = node;
    }
    else
    {
        if(root->data >= node->data)
        {
            root->left = insertdata(node,data);
        }
        else
            root->right = insertdata(node,data);
    }

    return root;
}

int main()
{
    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

cout<<"enter t "<<endl;
cin >> t;

    while(t-- > 0) {
            cout<<"enter data "<<endl;
        cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.preOrder(root);

    return 0;
}
