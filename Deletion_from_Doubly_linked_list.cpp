#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *pre,*next;
};
static node *head,*temp,*tail,*newnode;
static int count=0;
void Create()
{
	head=NULL;
	int choice=1;
	while(choice!=0)
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			temp=newnode;
			head=newnode;
			temp->pre=NULL;
		}
		else
		{
			temp->next=newnode;
			newnode->pre=temp;
			temp=newnode;
		}
		cout<<"Enter your choice: ";
		cin>>choice;
		count++;
	}
	temp->next=NULL;
	tail=temp;
}
void display()
{
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
		temp=temp->next;
	}
}
void DeleteFromBeginning()
{
	temp=head;
	head=temp->next;
	head->pre=NULL;
	delete temp;
	count--;
}
void DeleteFromEnd()
{
	temp=tail;
	tail=temp->pre;
	tail->next=NULL;
	delete temp;
	count--;
}
void DeleteFromSpecificPosition()
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
		if(pos==1)
		{
			DeleteFromBeginning();
		}
		else if(pos==count)
		{
			DeleteFromEnd();
		}	
		else
		{
			temp=head;
			while(i<pos)
			{
				temp=temp->next;
				i++;
			}
			temp->pre->next=temp->next;
			temp->next->pre=temp->pre;
			delete temp;
			count--;
		}
	}
}
int main()
{
	Create();
	display();
	DeleteFromBeginning();
	cout<<"Data after deleting first element: "<<endl;
	display();
	cout<<"Data after deleting last element: "<<endl;
	DeleteFromEnd();
	display();
	cout<<"Data after deleting element from specific position: "<<endl;
	DeleteFromSpecificPosition();
	display();
	cout<<"Number of elements in list: ";
	cout<<count;
}
