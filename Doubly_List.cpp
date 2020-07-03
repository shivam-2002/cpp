#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *pre,*next;
};
static node *head,*temp,*newnode,*prenode,*nextnode;
void CreateDoublyList()
{
	int choice=1;
	head=NULL;
	while(choice!=NULL)
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
			//newnode->next=NULL;
			newnode->pre=NULL;
		}
		else
		{
			temp->next=newnode;
			newnode->pre=temp;
			temp=newnode;
		}
		cout<<"Enter 0 if you want to exit, otherwise preass any number other than 0: ";
		cin>>choice;
	}
	temp->next=NULL;
}
void displayList()
{
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		cout<<"Data at index "<<i<<" : "<<temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{
	CreateDoublyList();
	displayList();
}
