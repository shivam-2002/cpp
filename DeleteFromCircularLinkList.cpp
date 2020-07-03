#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
static node *tail,*temp,*nextnode,*currentnode,*newnode;
static int count;
void CreateCLL()
{
	tail=NULL;
	int choice;
	cout<<"Enter 1 for continue and 0 for exit: ";
	cin>>choice;
	count=choice;
	while(choice !=0)
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		if(tail==NULL)
		{
			tail=newnode;
			tail->next=newnode;
		}
		else
		{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
		cout<<"Enter 1 for continue and 0 for exit: ";
		cin>>choice;
		count++;
	}
}
void display()
{
	temp=tail->next;
	int i=1;
	while(temp!=tail)
	{
		cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
		temp=temp->next;
		i++;
	}
	cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
	temp=temp->next;
}
void deleteFromBeginning()
{
	temp=tail->next;
	nextnode=tail;
	tail->next=temp->next;
	delete temp;
	count--;
}
void deleteFromEnd()
{
	temp=tail->next;
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=nextnode->next;
	tail=temp;
	delete nextnode;
	count--;
}
void DeleteFromPosition()
{
	int pos,i=1;
	cout<<"Enter position: ";
	cin>>pos;
	if(pos<1||pos>count)
	{
		cout<<"Invalid Position: ";
	}
	else if(pos==1)
	{
		deleteFromBeginning();
	}
	else if(pos==count)
	{
		deleteFromEnd();
	}
	else
	{
		temp=tail->next;
		while(i<pos-1)
		{
			temp=temp->next;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		delete nextnode;
	}
}
int main()
{
	CreateCLL();
	display();
	deleteFromBeginning();
	cout<<"Data after deleting first element: "<<endl;
	display();
	deleteFromEnd();
	cout<<"Data after deleting last element: "<<endl;
	display();
	DeleteFromPosition();
	cout<<"Data after deleting of specific position: "<<endl;
	display();
}
