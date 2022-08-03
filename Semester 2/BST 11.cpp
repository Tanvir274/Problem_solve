#include<iostream>
#include<conio.h>
using namespace std;

struct treenode
{
    int data;
    struct treenode *left,*right;
};

struct treenode *root,*ptr;

void make_root(int x)
{
    root = new treenode;
    root->data=x;
    root->left = NULL;
    root->right = NULL;
}

void make_node(int x)
{
    struct treenode *np = new treenode;
    np->data=x;
    np->left=NULL;
    np->right=NULL;
    ptr = root;
    while(ptr!=NULL)
    {
        if(ptr->data==x)
        {
            break;
        }
        else if(ptr->data>x)
        {
            if(ptr->left ==NULL)
            {
                ptr->left=np;
                break;
            }
            else
            {
                ptr =ptr->left;
            }
        }
        else if(ptr->data<x)
        {
            if(ptr->right ==NULL)
            {
                ptr->right=np;
                break;
            }
            else
            {
                ptr =ptr->right;
            }
        }
    }
}

void inorder(treenode *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        cout << ptr->data << "  ";
        inorder(ptr->right);
    }
}

void postorder(treenode *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->data << "  ";
    }
}

void search(int x)
{
    struct treenode *p ;
    p=root;
    while(p!=NULL)
    {
        if(p->data==x)
        {
            cout << "Found";
            break;
        }
        else if(p->data>x)
        {
            if(p->left==NULL)
            {
                cout << "Not found";
                break;

            }
            else
            {
                p=p->left;
            }
        }
        else if(p->data<x)
        {
            if(p->right ==NULL)
            {
                cout << "Not found";
                break;
            }
            else
            {
                p = p-> right;
            }
        }
    }

}



int main()
{
    root=NULL;
    int x,item,y;
    while(1)
    {   cout<<"Enter data or 0 for exit: ";
        cin>>x;
        if(x==0) break;
        else
        {   if(root==NULL)
            {   make_root(x);}
            else
            {   make_node(x);}
        }
    }
    inorder(root);

    cout << "enter data you want to search";
    cin>> item;
    search(item);
    cout << endl;
    postorder(root);

    getch();
}
