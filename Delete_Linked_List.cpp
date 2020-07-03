#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
static node *head,*temp,*newnode,*nextnode,*previous;
static int count=1;
createList()
{
	head=NULL;
	int choice=1;
	while(choice!=0)
	{
		newnode=new node;
		cout<<"Enter Data of List: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			temp=newnode;
			head=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"Enter your choice: ";
		cin>>choice;
		count++;
	}
	newnode->next=NULL;
}
displayList()
{
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		cout<<"Item at index "<<i<<" is: "<<temp->data<<endl;
		i++;
		temp=temp->next;
	}
}
deleteFromBeginning()
{
	temp=head;
	head=temp->next;
	delete temp;
	count--;
	cout<<"After Deleting first element of list: "<<endl;
}
deleteFromEnd()
{
	temp=head;
	if(temp->next==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else
	{
		while(temp->next!=NULL)
		{
			previous=temp;
			temp=temp->next;
		}
		previous->next=NULL;
		delete temp;	
	}
	count--;
	cout<<"After Deleting last element of list: "<<endl;
}
deleteInBetween()
{
	int pos;
	cout<<"Enter position To delete element: ";
	cin>>pos;
	if(pos>count)
	{
		cout<<"Invalid Input"<<endl;
	}
	else
	{
		temp=head;
		int i=1;
		previous=temp;
		while(i<pos-1)
		{
			previous->next=temp;
			temp=temp->next;
			i++;
		}
		previous->next=temp->next;
		delete temp;
		count--;
	}
	cout<<"After deletion of elements: "<<endl;
}
int main()
{
	createList();
	displayList();
	deleteFromBeginning();
	cout<<endl<<endl;
	displayList();
	cout<<endl<<endl;
	deleteFromEnd();
	displayList();
	cout<<count<<endl;
	deleteInBetween();
	displayList();
}
