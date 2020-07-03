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
void reverse()
{
	node *current,*nextnode;
	current=head;
	while(current!=NULL)
	{
		nextnode=current->next;
		current->next=current->pre;
		current->pre=nextnode;
		current=nextnode;
	}
	current=head;
	head=tail;
	tail=current;
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
int main()
{
	Create();
	display();
	reverse();
	cout<<"Data After Reversing element: "<<endl;
	display();
}
