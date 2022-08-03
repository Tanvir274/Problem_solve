#include<iostream>
#include<conio.h>
using namespace std;

typedef struct ListNode
{
    int data;
    ListNode* next;
}*nodeptr;

nodeptr head = NULL , curr;

void enqueue(int item)
{
    nodeptr newNode = new ListNode;
    newNode->data = item;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        curr->next = newNode;
    }
    curr = newNode;
}

void dequeue()
{
    nodeptr ptr = head,dptr;
    head = ptr->next;
    delete(dptr);
}


void Display()
{
    cout << "Enter List ";
    nodeptr ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << "  ";
        ptr= ptr->next;
    }
  cout << endl;
}

int main()
{
    int n,element;
    cout << "How many data To Insert ";
    cin >>n;
    cout << "Enter data "<<endl;
    for(int i =0;i<n;i++)
    {
        cin >>element;
        enqueue(element);
    }
    Display();
    dequeue();
    dequeue();
    enqueue(90);
    cout << "After Dequeue 2 elements : "<< endl;
    Display();

    getch();
}
