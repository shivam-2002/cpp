#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
static node *tail,*nextnode,*newnode,*temp,*currentnode,*previousnode;
static int count=1;
void CreateCLL()
{
	tail=NULL;
	int choice;
	cout<<"Enter 0 for exit, else any number: ";
	cin>>choice;
	if(choice ==0)
	{
		count=0;
	}
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
		}
		count++;
		cout<<"Enter 0 for exit, else any number: ";
		cin>>choice;
	}
}
void display()
{
	int i;
	temp=tail->next;
	while(temp->next!=tail)
	{
		int i=0;
		cout<<"Data at position "<<i<<" is: "<<temp->data<<endl;
		i++;
		temp=temp->next;
	}
	cout<<"Data at position "<<i<<" is: "<<temp->data<<endl;
}
void reverseCLL()
{
	currentnode=temp->next;
	nextnode=currentnode->next;
	while(currentnode!=tail)
	{
		previousnode=currentnode;
		currentnode=nextnode;
		nextnode=nextnode->next;
		currentnode->next=previousnode;
	}
	nextnode->next=tail;
	tail=nextnode;
}
int main()
{
	CreateCLL();
	display();
	reverseCLL();
	display();
}
