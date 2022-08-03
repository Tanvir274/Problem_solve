
#include<iostream>
#include<conio.h>
using namespace std;

typedef struct ListNode
{
    int data;
    ListNode* next;
}*nodeptr;

nodeptr head = NULL , curr;

void Push(int item)
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

void Pop()
{
    nodeptr ptr = head,dptr;
    while (ptr->next->next != NULL)
    {
      ptr = ptr->next;
    }
        dptr = ptr->next;
        ptr->next =NULL;
        delete (dptr);
}


void Display()
{
    cout << "Enter List";
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
    cout << "How many data To PUsh ";
    cin >>n;
    cout << "Enter data "<<endl;
    for(int i =0;i<n;i++)
    {
        cin >>element;
        Push(element);
    }
    Display();
    Pop();
    Pop();
    cout << "After deleting 2 elements : "<< endl;
    Display();

    getch();
}
