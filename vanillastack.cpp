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
        cout<<endl;
}

int main()
{
        //Testing of the stack operations
        Stack vanillaStack;
        //Print out the current size of vanillaStack
        cout<<"Size of the stack: "<<vanillaStack.size()<<endl;

        if (vanillaStack.push(5))
        {
                vanillaStack.printStack(); // output should be: 5
        }
        if (vanillaStack.push(3))
        {
                vanillaStack.printStack();//output should be 5 3
        }
        if (vanillaStack.push(8))
        {
                vanillaStack.printStack();//output shoukld be 5 3 8
        }
        if (vanillaStack.push(6))
        {
                vanillaStack.printStack();//output should be 5 3 8 6
        }
        if (vanillaStack.push(7))
        {
                vanillaStack.printStack();// output should be 5 3 8 6 7
        }
        if (vanillaStack.push(10))
        {
                vanillaStack.printStack();//no otput due to stack Overflow
        }

        //print out the size of the current vanillaStack
        cout<<"Size of the stack: "<<vanillaStack.size()<<endl;// size should be 5
        cout<<"A peek at the top of the stack reveals: "<<vanillaStack.peek()<<endl;//7 expected

        vanillaStack.pop();
        vanillaStack.printStack();// 5 3  8 6
}