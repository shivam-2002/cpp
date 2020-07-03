#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
static node *head,*newnode,*temp;
static int count=1;
createLinkedList()
{
	head=NULL;
	int choice=1;
	while(choice!=0)
	{
		newnode=new node;
		cout<<"Enter data of list: ";
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
		count++;
		cout<<"Enter 0 for exit otherwise enter anything: ";
		cin>>choice;
	}
	temp->next=NULL;		
}
displayList()
{
	int i=1;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"Element at index "<<i<<" :"<<temp->data<<endl;
		i++;
		temp=temp->next;
	}
}
insertionAtBeginning()
{
	newnode=new node;
	cout<<"Enter Data to insert at beginning : ";
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
	count++;
}
insertionAtEnd()
{
	temp=head;
	newnode=new node;
	cout<<"Enter element to insert at end of list: ";
	cin>>newnode->data;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	count++;
}
insertInBetweenList()
{
	int pos,i=1;
	node *previous;
	cout<<"Enter Position where you want to insert Element: ";
	cin>>pos;
	newnode=new node;
	if(pos>count)
	{
		cout<<"Invalid Position entered by you"<<endl;
	}
	else
	{
		cout<<"Enter data to insert: ";
		cin>>newnode->data;
		temp=head;
		while(i<pos)
		{
			previous=temp->next;
			temp=temp->next;
			i++;
		}
		previous->next=newnode;
		newnode->next=temp;
	}	
}
int main()
{
	createLinkedList();
	displayList();
	insertionAtBeginning();
	displayList();
	insertionAtEnd();
	displayList();
	insertInBetweenList();
	displayList();
}
