#include<iostream>
using namespace std;
static int n,*deque,f=-1,r=-1,count=0;
void createDeque(int size)
{
	n=size;
	deque=new int[n];
}
bool isFull()
{
	if((f+1)%n==r)
	{
		return true;
	}
	else
	return false;
}
bool isEmpty()
{
	if(f==-1&&r==-1)
	return true;
	else
	return false;
}
void enqueFront(int x)
{
	if(isFull())
	{
		cout<<"Queue is Full\n";
	}
	else if(isEmpty())
	{
		f++;
		r++;
		deque[f]=x;
		count++;
	}
	else if(f==0)
	{
		f=n-1;
		deque[f]=x;
		count++;
	}
	else
	{
		f--;
		deque[f]=x;
		count++;
	}
}
void enqueRear(int x)
{
	if(isFull())
	{
		cout<<"Queue is Full\n";
	}
	else if(isEmpty())
	{
		f++;
		r++;
		deque[r]=x;
		count++;
	}
	else if(r==n-1)
	{
		r=0;
		deque[r]=x;
		count++;
	}
	else
	{
		r++;
		deque[r]=x;
		count++;
	}
}
void dequeFront()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
	}
	else if(f==r)
	{
		f=-1;
		r=-1;
		count--;
	}
	else if(f==n-1)
	{
		cout<<"Deque element is: "<<deque[f]<<endl;
		f=0;
		count--;
	}
	else
	{
		cout<<"Deque element is: "<<deque[f]<<endl;
		f++;
		count--;
	}
}
void dequeRear()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
	}
	else if(f==r)
	{
		f=-1;
		r=-1;
		count--;
	}
	else if(r==0)
	{
		r=n-1;
		count--;
	}
	else
	{
		r--;
		count--;
	}
}
void display()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		int i,j=1;
		i=f;
		while(i!=r)
		{
			cout<<"Element of queue is "<<j<<" : "<<deque[i]<<endl;
			i=(i+1)%n;
		}
	}
}
void getFront()
{
	if(isEmpty())
	{
		cout<<"Queue is empty\n";
	}
	else
	{
		cout<<"front element of queue is: "<<deque[f]<<endl;
	}
}
void getRear()
{
	if(isEmpty())
	{
		cout<<"Queue is empty\n";
	}
	else
	{
		cout<<"Rear element of queue is: "<<deque[r]<<endl;
	}
}
int main()
{
	int choice=1,x;
	while(choice!=0)
	{
		cout<<"Enter '0' for exit, 1 for enque from front, '2' for enque from rear, '3' for deque from front, '4' for deque from rear, '5' for get front, '6' for get rear and '7' for display: ";
		cin>>choice;
		switch(choice)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter element for enque from front: ";
				cin>>x;
				enqueFront(x);
				break;
			case 2:
				cout<<"Enter element for enque from rear: ";
				cin>>x;
				enqueRear(x);
				break;
			case 3:
				dequeFront();
				break;
			case 4:
				dequeRear();
				break;
			case 5:
				getFront();
				break;
			case 6:
				getRear();
				break;
			case 7:
				display();
				break;
			default:
				cout<<"Please enter valid input\n";
		}
	}
	//while(choice!=0);
}
