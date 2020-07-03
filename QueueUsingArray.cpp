#include<iostream>
using namespace std;
static int *queue,n,front=-1,rear=-1;
void createQueue(int n1)
{
	n=n1;
	queue=new int[n1];
}
bool isEmpty()
{
	if(front==-1&&rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isFull()
{
	if(rear>=n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void enqueue(int x)
{
	if(isFull())
	{
		cout<<"Queue is overflow condition"<<endl;
	}
	else if(isEmpty())
	{
		front++;
		rear++;
		queue[front]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void displayQueue()
{
	if(isEmpty())
	{
		cout<<"Queue is underflow condition"<<endl;
	}
	else
	{
		for(int j=front;j<=rear;j++)
		{
			cout<<"Element of Queue at position "<<j+1<<" is: "<<queue[j]<<endl;
		}
	}
}
void dequeue()
{
	if(isEmpty())
	{
		cout<<"Queue is underflow condition"<<endl;
	}
	else
	{
		cout<<"Dequeue Element is: "<<queue[front]<<endl;
		front++;
	}
}
void peek()
{
	if(isEmpty())
	{
		cout<<"Queue is underflow condition"<<endl;
	}
	else
	{
		cout<<"Peek element of queue is: "<<queue[front]<<endl;
	}
}
int main()
{
	int size,choice,x;
	do
	{
		cout<<"Enter '0' for exit, '1' for create queue, '2' for enqueue operation, '3' for dequeue operation, '4' for peek operation, '5' for isfull, '6' for isEmpty and '7' for display queue element:  ";
		cin>>choice;
		switch(choice)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter size of Queue: ";
				cin>>size;
				createQueue(size);
				break;
			case 2:
				cout<<"Enter element for enqueue: ";
				cin>>x;
				enqueue(x);
				break;
			case 3:
				dequeue();
				break;
			case 4:
				peek();
				break;
			case 5:
				cout<<isFull();
				break;
			case 6:
				cout<<isEmpty();
				break;
			case 7:
				displayQueue();
				break;
			default:
				cout<<"Plese provide valid input: "<<endl;
		}
	}
	while(choice!=0);
}
