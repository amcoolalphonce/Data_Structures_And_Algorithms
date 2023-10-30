#include<iostream>
using namespace std;


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
                while (temp != NULL)
        }
}