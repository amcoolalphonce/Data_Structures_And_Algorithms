#include<iostream>
using namsespace std;

class Node
{
        public:
        int data;
        Node *next;
        Node(int x)
        {
                this->data = x;
                this->next = NULL;
        }
        void printList()
        {
                Node *temp = this;
                while( temp ! = NULL)  
                {
                        cout<<temp->data<<"";
                        temp = temp->next;
                }
                cout<<endl;
        }
}