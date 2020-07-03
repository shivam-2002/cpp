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
	cout<<"Enter '-1' for no node: ";
	cin>>x;
	if(x==-1)
	{
		return 0;
	}
	else
	{
		newnode->data=x;
		cout<<"Enter left child of "<<x<<" : ";
		newnode->left=create();
		cout<<"Enter left child of "<<x<<" : ";
		newnode->right=create();
		return newnode;
	}
}
int main()
{
	node *root;
	root=NULL;
	root=create();
}
