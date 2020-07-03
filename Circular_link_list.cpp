#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
static node *head,*temp,*newnode;
void createCircularLinkList()
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
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"Enter 0 for exit otherwise enter anything: ";
		cin>>choice;
	}
	temp->next=head;
}
void display()
{
	int i=1;
	temp=head;
	while(temp->next!=head)
	{
		cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
		temp=temp->next;
		i++;
	}
	cout<<"Element at index "<<i<<" is: "<<temp->data<<endl;
}
int main()
{
	createCircularLinkList();
	display();
}
