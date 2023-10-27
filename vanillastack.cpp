#include<iostream>
#include<climits>

#define CAPACIITY 5
using namespace std;

class Stack
{
        int SizeOfStack;
        int stackArray[CAPACIITY];
        int top;
        public:
        Stack()
        {
                SizeOfStack = 0;
                top = -1;
        }
        int size();
        bool isEmpty;
        bool push(int newElement);
        int pop();
        int peek();
        void printStack();
};

int Stack::size()
{
        return Stack::SizeOfStack;
}

bool Stack::isEmpty()
{
        if (Stack::SizeOfStack == 0)
        {
                return true;
        }
        else
        {
                return false;
        }
}

bool Stack::push(int newElement)
{
        if(Stack::SizeOfStack >= CAPACIITY)
        {
                return false;
        }
        else
        {
                top++;
                Stack::stackArray[Stack::top] = newElement;
                Stack::SizeOfStack++;
                return true;
        }
}

int Stack::pop()
{
        if(Stack::SizeOfStack <= 0)
        {
                return INT_MAX;
        }
        else
        {
                SizeOfStack--;
                Stack::top--;
                return Stack::stackArray[Stack::top];
        }
}

int Stack::peek()
{
        if(Stack::SizeOfStack <= 0)
        {
                return INT_MAX;
        }
        else
        {
                return Stack::stackArray[Stack::top];
        }
}
//print stack function to continue
void Stack::printStack()
{
        if(Stack::SizeOfStack <= 0)
        {
                cout<<INT_MAX;
        }
        else
        {
                for(int j = 0; j < Stack::SizeOfStack; j++)
                {
                        cout<<Stack::stackArray[j]<<"";
                }
        }
}