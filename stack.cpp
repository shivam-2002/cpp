#include<iostream>
using namespace std;
class Stack
{
		int top;
		int arr[5];
	public:
		Static()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
				return true;
			else
				return false;
		}
		bool isFull()
		{
			if(top==4)
				return true;
			else
				return false;
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Stack is overflow \n";
			}
			else
			{
				top++;
				arr[top]=val;
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"Stack is underflow:";
				return 0;
			}
			else
			{
				int popValue=arr[top];
				arr[top]=0;
				top--;
				return (popValue);
			}
		}
		
		int coutn()
		{
			return(top+1);
		}
		
		int peak(int pos)
		{
			if(isEmpty())
			{
				cout<<"Stack is underflow:";
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}
		
		void change(int pos,int val)
		{
			arr[pos]=val;
			cout<<"Value changed at location"<<pos<<" "<<arr[pos];
		}
		
		void display()
		{
			cout<<"All values in the stack array:";
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
		
		
};
int main()
{
	Stack s;
	int option,pos,value;
	do
	{
		cout<<"What operation do you want to perform. Enter 0 to exit\n";
		cout<<"1 push()"<<endl;
		cout<<"2 pop()\n";
		cout<<"3 isEmpty()\n";
		cout<<"4 isFull()\n";
		cout<<"5 peek()"<<endl;
		cout<<"6 count\n";
		cout<<"7 change()\n";
		cout<<"8 display()\n";
		cout<<"9 clear()\n";
		cin>>option;
		switch(option)
		{
		case 1:
			cout<<"Enter an item to push in the stack: ";
			cin>>value;
			s.push(value);
			break;
	    case 2:
	    	cout<<"Pop Function is called- Poped value: ";
			cout<<s.pop()<<endl;
	    	break;
		case 3:
	    	cout<<s.isEmpty()<<endl;
	    	break;
	    case 4:
	    	cout<<s.isFull()<<endl;
	    	break;
	    case 5:
	    	cout<<"Enter Position for peek: ";
	    	cin>>pos;
	    	cout<<s.peak(pos)<<endl;
	    	break;
	    case 6:
	    	cout<<"Number of elements in stack is: "<<s.coutn()<<endl;
	    	break;
	    case 7:
	    	cout<<"Enter position and value to change: ";
	    	cin>>pos>>value;
	    	s.change(pos,value);
	    	break;
	    case 8:
	    	s.display();
	    	break;
	    case 9:
	    	system("cls");
	    	break;
	    default:
	    	cout<<"Please enter valid choice:"<<endl;
	    	break;
	    	
		}
    }while(option!=0);
	
}
