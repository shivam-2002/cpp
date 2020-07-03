#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
static node *front=NULL,*newnode,*rear=NULL,*temp;
void enqueue(int x)
{
	newnode=new node;
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=newnode;
		rear=newnode;
		//rear->next=NULL;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void displayOfQueue()
{
	if(front==NULL)
	{
		cout<<"Queue is Underflow condition"<<endl;
	}
	else
	{
		temp=front;
		int i=1;
		while(temp!=NULL)
		{
			cout<<"Element of queue at "<<i<<" position is: "<<temp->data<<endl;
			temp=temp->next;
			i++;
		}
	}
}
void dequeue()
{
	if(front==NULL)
	{
		cout<<"Queue is Underflow condition"<<endl;
	}
	else if(front==rear)
	{
		temp=front;
		front==NULL;
		rear==NULL;
		delete temp;
	}
	else
	{
		temp=front;
		front=front->next;
		delete temp;
	}
}
void peekOfQueue()
{
	if(front==NULL)
	{
		cout<<"List is underflow condition"<<endl;
	}
	else
	{
		cout<<"Peek element is : "<<front->data<<endl;
	}
}
int main()
{
	int choice,x;
	do
	{
		cout<<"Press '1' for enqueue operation, '2' for dequeue operation, '3' for peek operation, 4 for display of queue element and '0' for exit from the programme: ";
		cin>>choice;
		switch(choice)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter element for enqueue operation: ";
				cin>>x;
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peekOfQueue();
				break;
			case 4:
				displayOfQueue();
			default:
				cout<<"Please provide valid input: ";
		}
	}while(choice!=0);
}
