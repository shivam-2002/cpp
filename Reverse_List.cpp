#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
static node *head,*newnode,*nextnode,*temp,*currentnode,*previousnode;
void CreateList()
{
	int choice=1;
	head=NULL;
	while(choice!=0)
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"Enter 0 for exit, otherwise anything: ";
		cin>>choice;
	}
	temp->next=NULL;
}
void reverseList()
{
	previousnode=NULL;
	currentnode=head;
	nextnode=head;
	while(nextnode!=NULL)
	{
		nextnode=nextnode->next;
		currentnode->next=previousnode;
		previousnode=currentnode;
		currentnode=nextnode;
	}
	head=previousnode;
}
void displayList()
{
	int i=1;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"Element at "<<i<<" is: ";
		cout<<temp->data<<endl;
		temp=temp->next;
		i++;
	}
}
int main()
{
	CreateList();
	displayList();
	reverseList();
	displayList();
}
