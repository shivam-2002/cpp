#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
static node *head,*newnode,*temp;
createLinkedList()
{
	head=NULL;
	int choice=1;
	while(choice!=0)
	{
		newnode=new node;
		cout<<"Enter data of list: ";
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
	temp->next=NULL;		
}
displayList()
{
	int i=1;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"Element at index "<<i<<" :"<<temp->data<<endl;
		i++;
		temp=temp->next;
	}
}
int main()
{
	createLinkedList();
	displayList();
}
