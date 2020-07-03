#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
static node *front=NULL,*rear=NULL,*temp,*newnode;
static int count=0;
void enqueue(int x)
{
	newnode=new node;
	newnode->data=x;
	if(front==NULL&&rear==NULL)
	{
		front=newnode;
		rear=newnode;
		rear->next=newnode;
	}
	else
	{
		newnode->next=front;
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==NULL&&rear==NULL)
	{
		cout<<"Queue is underflow condition\n";
	}
	else if(front==rear)
	{
		front==NULL;
		rear==NULL;//when queue having only one element
	}
	else
	{
		temp=front;
		front=front->next;
		rear->next=front;
		delete temp;
	}
}
void peek()
{
	if(front==NULL&&rear==NULL)
	{
		cout<<"Queue is empty\n";
	}
	else
	{
		cout<<"Peek element of queue is: "<<front->data<<endl;
	}
}
void display()
{
	if(front==NULL&&rear==NULL)
	{
		cout<<"Queue is underflow condition\n";
	}
	else
	{
		int i=1;
		temp=front;
		while(temp!=NULL)
		{
			cout<<"Element of queue at position "<<i<<"is: "<<temp->data<<endl;
			temp=temp->next;
			i++;
		}
	}
}
int main()
{
	int choice,x;
	do
	{
		cout<<"Enter '1' for enqueue operation, '2' for dequeue, '3' for peek, '4' for display and '0' for exit: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter Element for enqueue: ";
				cin>>x;
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				cout<<"Please provide valid input\n";
		}
	}
	while(choice!=0);
}
