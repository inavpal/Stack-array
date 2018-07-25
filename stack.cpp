#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;


// class for stack
class Stack
{
	int Size;	//size of our stack
	int *arr;	//pointer to the array on heap
	int top;	//no of elements in stack
public:
	Stack(int n)	//stack constructor
{
	Size = n;
	arr = new int[n];
	top = -1;
}
	void push(int x);	//push an element in stack
	void pop();			//pop the top most element in stack
	int Top();			//return top most element
	bool isEmpty();		//gives true if stack is empty else false
	bool isFull();	    //gives true if stack is full  else false
};

bool Stack ::isEmpty()
{
	return (top == -1);
}
bool Stack::isFull()
{
	return (top == Size-1);
}
void Stack::push(int x)
{
	if(isFull())
		cout<<"STACK IS FULL\n";
	else
		arr[++top] = x;
}

void Stack::pop()
{
	if(isEmpty())
	cout<<"STACK IS EMPTY\n";
	else
		top--;
}

int Stack::Top()
{
	if(isEmpty())
		cout<<"STACK IS EMPTY\n";
	else
		return arr[top];
	return -1;
}
int main()
{
Stack st(5);
st.push(10);
st.push(5);
st.pop();
st.push(12);
cout<<"TOP: "<<st.Top()<<"\n";
st.push(15);
st.push(7);
st.push(4);
cout<<"IS FULL: "<<st.isFull()<<"\n";
cout<<"IS EMPTY: "<<st.isEmpty()<<"\n";
cout<<"TOP: "<<st.Top()<<"\n";
while(!st.isEmpty())
{
	cout<<st.Top()<<" ";
	st.pop();
}
cout<<"\nIS EMPTY: "<<st.isEmpty();

return 0;
}
