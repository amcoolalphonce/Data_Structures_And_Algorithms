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
        void insertTail(int newElement)
        {
                Node *tail = new Node(newElement);
                Node *nodePtr = this;
                while(nodePtr != NULL)
                {
                        if(nodePtr->next == NULL)
                        {
                                nodePtr->next = tail;
                                nodePtr = tail;
                        }
                        nodePtr = nodePtr->next;
                }
        }
        Node *insertHead(int newElement)
        {
                Node *head = new Node(newElement);
                Node *temp = this;
                head->next = temp;
                temp = head;
                return temp;
        }
        void insertMiddle(int newElement , int position)
        {
                Node *middle = new Node(newElement);
                Node *temp = this;
                int index = 0;
                while(temp != NULL)
                {
                        index++;
                        if(index == position)
                        {
                                middle->next = temp->next;
                                temp->next = middle;
                        }
                        temp = temp->next;
                }
        }
};
int main()
{
        Node *myList;
        int n, temp;

        cout<<"How many elements do you want to enter?"
        cin>>n;
        cout<<"Enter the first element \n";
        cin>>temp;
        myList = new Node(temp);

        for (int i = 0; i< n-1; i++)
        {
                cout<<"Enter the next element: ";
                cin>>temp;
                myList = myList->insertTail(temp);
        }
        myList->printList();
        int newElement;
        cout<<"Enter an element to insert at the head:";
        cin>>newElement;
        myList = myList->insertHead(newElement);

        cout<<"Enter another element to insert at the head:";
        cin>>newElement;
        myList = myList->insertHead(newElement)
}