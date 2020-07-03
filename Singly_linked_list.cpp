#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
int main()
{
	node *head,*newnode,*temp;
	head=0;
	int choice=1,c=0,a;
	while(choice!=0)
	{
		newnode=new node;
		cout<<"Enter data: ";
		cin>>newnode->data;
		newnode->next=0;
		if(head==0)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"Enter a number, enter 0 ifor exit:";
		cin>>choice;
	}
	temp->next=NULL;
	temp=head;
	cout<<"If you want to print data of linked list press 1 otherwise press anything: ";
	cin>>a;
	if(a==1)
	{
		while(temp!=NULL)
		{
		cout<<temp->data<<endl;
		temp=temp->next;
		c++;
		}
		cout<<"Number of elements in this linked list: "<<c<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"Thank you for visiting my program: ";
	}
}
