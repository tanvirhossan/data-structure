#include<bits/stdc++.h>
using namespace std;
struct node *root=NULL;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *insrt(struct node *rt,int value)
{
    if(rt==NULL)
    {
        struct node *temp=new node();
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
        rt=temp;
    }
    else if(rt->data<value)
        rt->right=insrt(rt->right,value);
    else
        rt->left=insrt(rt->left,value);
    root=rt;
    return rt;
};
void preorder(struct node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    insrt(root,23);
    insrt(root,17);
    insrt(root,31);
    insrt(root,19);
    insrt(root,25);
    insrt(root,29);
    insrt(root,17);
    insrt(root,21);
    insrt(root,11);
    insrt(root,33);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}
