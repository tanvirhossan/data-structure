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
    else if(value<=rt->data)
        rt->left=insrt(rt->left,value);
    else
        rt->right=insrt(rt->right,value);
    printf("%d--%d\n\n",rt,rt->data);
    root=rt;
    return rt;
};
struct node *findmax(struct node *root)
{
    if(root->right==NULL)
        return root;
    return findmax(root->right);
};
struct node *deletenode(struct node *root,int value)
{
    if(root==NULL)
        return NULL;
    else if(value>root->data)
        root->right=deletenode(root->right,value);
    else if(value<root->data)
        root->left=deletenode(root->left,value);
    else
    {
        if(root->right==NULL&&root->left==NULL)
            root=NULL;
        else if(root->right==NULL)
            root=root->left;
        else if(root->left==NULL)
            root=root->right;
        else
        {
            struct node *tmp=findmax(root->left);
            root->data=tmp->data;
            root->left=deletenode(root->left,tmp->data);
        }
    }
    return root;
}
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
queue<node *>q;
void levelorder(struct node *root)
{
    if(root==NULL)
        return;
    q.push(root);
    while(!q.empty())
    {
        root=q.front();
        if(root->left!=NULL)
            q.push(root->left);
        if(root->right!=NULL)
            q.push(root->right);
        cout<<root->data<<" ";
        q.pop();
    }
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
    cout<<"before deletion:"<<endl<<"pre-order:"<<endl;
    preorder(root);
    cout<<endl<<"in-oreder:"<<endl;
    inorder(root);
    cout<<endl<<"post-oreder:"<<endl;
    postorder(root);
    cout<<endl<<"level-oreder:"<<endl;
    levelorder(root);
    cout<<endl;
    deletenode(root,19);
    cout<<"after deletion:"<<endl<<"pre-order:"<<endl;
    preorder(root);
    cout<<endl<<"in-oreder:"<<endl;
    inorder(root);
    cout<<endl<<"post-oreder:"<<endl;
    postorder(root);
    cout<<endl<<"level-oreder:"<<endl;
    levelorder(root);
}
