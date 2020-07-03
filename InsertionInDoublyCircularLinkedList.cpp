#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *pre,*next;
};
static node *head,*newnode,*temp,*tail;
static int count=0;
void Create()
{
	int choice;
	head=NULL;
	do
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
			newnode->pre=head;
			newnode->next=head;
		}
		else
		{
			newnode->pre=tail;
			newnode->next=head;
			tail->next=newnode;
			head->pre=newnode;
			tail=newnode;
		}
		cout<<"Enter 0 for exit, otherwise anything: ";
		cin>>choice;
		count++;
	}while(choice!=0);
}
void display()
{
	int i=1;
	temp=head;
	while(temp->next!=head)
	{
		cout<<"Data at position "<<i<<" is: "<<temp->data<<endl;
		i++;
		temp=temp->next;
	}
	cout<<"Data at position "<<i<<" is: "<<temp->data<<endl;
}
void InsertAtBeginning()
{
	newnode=new node;
	cout<<"Enter data to insert at beginning: ";
	cin>>newnode->data;
	newnode->next=head;
	newnode->pre=head->pre;
	head=newnode;
	tail->next=newnode;
	count++;
}
void InsertAtEnd()
{
	newnode=new node;
	cout<<"Enter data to insert at End: ";
	cin>>newnode->data;
	newnode->next=head;
	newnode->pre=tail;
	tail->next=newnode;
	head->pre=newnode;
	tail=newnode;
	count++;
}
void InsertAtPos()
{
	int pos,i=1;
	cout<<"Enter Position: ";
	cin>>pos;
	if(pos<1||pos>count)
	{
		cout<<"Invalid Position"<<endl;
	}
	else if(pos==1)
	{
		InsertAtBeginning();
	}
	else if(pos==count)
	{
		InsertAtEnd();
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
		}
		newnode->pre=temp;
		newnode->next=temp->next;
		temp->next->pre=newnode;
		temp->next=newnode;
		count++;
	}
}
int main()
{
	Create();
	display();
	InsertAtBeginning();
	display();
	InsertAtEnd();
	display();
	InsertAtPos();
	display();
}
