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
        int temp;
        cout<<"Enter data value of the first node: ";
        cin>>temp;
        myList = new Node(temp);

        cout<<"Enter data value of the next node: ";
        cin>>temp;
        node2 = new Node(temp);
        myList->next = node2;

        cout << "Enter data value of next node: ";
        cin >> temp; // assume 30 is entered
        node3 = new Node(temp);
        node2->next = node3;
        cout << "The state of the linked list is as follows: ";
        myList->printList();
        // output should be 10 20 30
}