#include<iostream>
using namespace std;
typedef struct treenode
{
    int data;
    struct treenode *left,*right;
}*treeptr;

treeptr root,ptr;

void makeroot(int x)
{
    root=new treenode;
    root->data=x;
    root->left=NULL;
    root->right=NULL;
}
void makenode(int x)
{
    treeptr np=new treenode;
    np->data=x;
    np->left=NULL;
    np->right=NULL;
    ptr=root;
    while(ptr !=NULL)
    {
        if(ptr->data==x)
            break;
        else if(ptr->data>x)
        {
            if(ptr->left==NULL)
            {
                ptr->left=np;
                break;
            }
            else
                ptr=ptr->left;
        }
        else if(ptr->data<x)
        {
            if(ptr->right==NULL)
            {
                ptr->right=np;
                break;
            }
            else
                ptr=ptr->right;
        }
    }
}
void inorder(treeptr p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<"  ";
    }
}

int main()
{
    root=NULL;
    int x;
    while(1)
    {
        cout<<"Enter your data or 0 for exit:";
        cin>>x;
        if(x==0)
            break;
        else
        {
            if(root==NULL)
            {
                makeroot(x);
            }
            else
                makenode(x);
        }
    }
    cout<<"Inorder:";
    inorder(root);

}
