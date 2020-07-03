#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *pre,*next;
};
static int count=0;
static node *head,*newnode,*tail,*temp;
void CreateDoubleLinkedList()
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
			temp=newnode;
			head=newnode;
			newnode->pre=NULL;
		}
		else
		{
			temp->next=newnode;
			newnode->pre=temp;
			temp=newnode;
		}
		count++;
		cout<<"Enter 0 for exit else any number: ";
		cin>>choice;
	}
	tail=temp;
	temp->next=NULL;
}
void insertAtBeginning()
{
	newnode=new node;
	cout<<"Enter Data: ";
	cin>>newnode->data;
	temp=head;
	temp->pre=newnode;
	newnode->next=temp;
	newnode->pre=NULL;
	head=newnode;
	count++;
}
void display()
{
	int i=1;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"Element at "<<i<<" Positon: "<<temp->data<<endl;
		temp=temp->next;
		i++;
	}
}
void InsertAtEnd()
{
	newnode=new node;
	cout<<"Enter Data: ";
	cin>>newnode->data;
	tail->next=newnode;
	newnode->pre=tail;
	newnode->next=NULL;
	tail=newnode;
	count++;
}
void InsertAtSpecificPosition()
{
	int pos,i=1;
	cout<<"Enter Postion to insert new data: ";
	cin>>pos;
	if(pos<1||pos>count)
	{
		cout<<"Invalid Position "<<endl;
	}
	else if(pos==1)
	{
		newnode=new node;
		cout<<"Enter data: ";
		cin>>newnode->data;
		newnode->next=head;
		head->pre=newnode;
		head=newnode;
		newnode->pre=NULL;
		count++;
	}
	else
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		newnode->next->pre=newnode;
		temp->next=newnode;
		newnode->pre=temp;
		count++;
	}
}
void InsertionAfterSpecificPosition()
{
	int pos,i=1;
	cout<<"Enter position: ";
	cin>>pos;
	if(pos<1||pos>count)
	{
		cout<<"Invalid Position"<<endl;
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
		}
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		newnode->next=temp->next;
		newnode->pre=temp;
		temp->next=newnode;
		newnode->next->pre=newnode;
		count++;
	}
}
int main()
{
	CreateDoubleLinkedList();
	insertAtBeginning();
	cout<<"Data after insertin element at beginning"<<endl;
	display();
	InsertAtEnd();
	cout<<"Data after inserting element at end"<<endl;
	display();
	InsertAtSpecificPosition();
	cout<<"Data after inserting element in between List"<<endl;
	display();
	InsertionAfterSpecificPosition();
	cout<<"Data after inserting element after specific position: "<<endl;
	display();
}
