#include<bits/stdc++.h>
using namespace std;
struct node *root=NULL;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void srch(struct node *root,int value)
{
    if(root==NULL)
        cout<<"not found\n"<<endl;
    else if(root->data==value)
        cout<<"found\n"<<endl;
    else if(root->data<value)
        return srch(root->right,value);
    else
        return srch(root->left,value);
}
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
    srch(root,23);
    srch(root,17);
    srch(root,31);
    srch(root,49);
    srch(root,25);
    srch(root,21);
    srch(root,33);
}
