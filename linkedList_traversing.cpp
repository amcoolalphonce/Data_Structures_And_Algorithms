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
                {
                        cout<<temp->data<<" ";
                        temp = temp->next;
                }
        }
};

//main function to test the code
int main()
{
        Node *myList = NULL, *node2 = NULL, *node3 = NULL;
}