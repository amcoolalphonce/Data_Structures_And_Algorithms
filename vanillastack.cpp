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
        }
}