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
int main()
{
	Create();
	display();
	cout<<count;
}
