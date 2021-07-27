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
int rootheight(struct node *root)
{
    if(root==NULL)
        return -1;
    else
    {
        int leftheight=rootheight(root->left);
        int rightheight=rootheight(root->right);

    if(leftheight>rightheight)
        return leftheight+1;
    else
        return rightheight+1;
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
    cout<<rootheight(root)<<endl;
}
