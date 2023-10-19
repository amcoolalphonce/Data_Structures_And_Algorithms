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
}