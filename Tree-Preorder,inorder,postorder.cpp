#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left,*right;
};
node *create()
{
	int x;
	node *newnode;
	newnode=new node;
	cout<<"Enter data if you want no node than press '-1': ";
	cin>>x;
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	cout<<"Enter left child of "<<x<<": ";
	newnode->left=create();
	cout<<"Enter right child of "<<x<<": ";
	newnode->right=create();
	return newnode;
}
void preorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		cout<<"Rood data: "<<root->data<<endl;
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		inorder(root->left);
		cout<<"Root Data: "<<root->data<<endl;
		inorder(root->right);
	}
}
void postorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		cout<<"Root Data: "<<root->data<<endl;
	}
}
int main()
{
	node *root;
	root=create();
	cout<<"Inorder of tree: "<<endl;
	inorder(root);
	cout<<"Preorder of tree: "<<endl;
	preorder(root);
	cout<<"Postorder of tree: "<<endl;
	postorder(root);
}
