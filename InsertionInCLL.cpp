#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
static node *tail,*temp,*newnode;
static int count=0;
void createCLL()
{
	tail=NULL;
	int choice=1;
	while(choice!=0)
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
		cout<<"Enter your choice: ";
		cin>>choice;
		count++;
	}
}
void displayCLL()
{
	int i=1;
	temp=tail->next;
	while(temp!=tail)
	{
		cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
		temp=temp->next;
		i++;
	}
	cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
}
void insertAtBeginning()
{
	newnode=new node;
	cout<<"Enter data to insert at beginning: ";
	cin>>newnode->data;
	newnode->next=tail->next;
	tail->next=newnode;
	count++;
}
void insertAtEnd()
{
	newnode=new node;
	cout<<"Enter data to insert at end of list: ";
	cin>>newnode->data;
	newnode->next=tail->next;
	tail->next=newnode;
	tail=newnode;
	count++;
}
void insertAtPos()
{
	int pos,i=1;
	cout<<"Enter position: ";
	cin>>pos;
	if(pos<1||pos>count+1)
	{
		cout<<"Invalid Position"<<endl;
	}
	else
	{
		if(pos==1)
		{
			insertAtBeginning();
		}
		else if(pos==count)
		{
			insertAtEnd();
		}
		else
		{
			newnode=new node;
			cout<<"Enter data to insert: ";
			cin>>newnode->data;
			temp=tail->next;
			while(i<pos-1)
			{
				temp=temp->next;
			}
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
}
int main()
{
	createCLL();
	displayCLL();
	insertAtBeginning();
	displayCLL();
	insertAtEnd();
	displayCLL();
	insertAtPos();
	displayCLL();
}
