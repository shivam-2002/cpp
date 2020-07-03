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
void CreateDCLL()
{
	head=NULL;
	int choice;
	do
	{
		newnode=new node;
		cout<<"Enter Data: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			head=newnode;
			head->next=newnode;
			head->pre=newnode;
			tail=newnode;
		}
		else
		{
			newnode->pre=tail;
			newnode->next=head;
			head->pre=newnode;
			tail->next=newnode;
			tail=newnode;
		}
		cout<<"Enter 0 for exit, else any number: ";
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
		cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
}
void deleteFromBeginning()
{
	temp=head;
	if(head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else if(head->next=head)
	{
		head=NULL;
		tail=NULL;
		delete temp;
	}
	else
	{
		head=head->next;
		head->pre=tail;
		tail->next=head;
		delete temp;
		count--;
	}
}
int main()
{
	CreateDCLL();
	display();
	deleteFromBeginning();
	display();
	cout<<count;
}
