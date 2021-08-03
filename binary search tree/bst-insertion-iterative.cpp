#include<bits/stdc++.h>
using namespace std;
struct node *root=NULL,*x;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void srch(int value)
{
    struct node *current=root;
    int ck=0;
    if(root==NULL)
        cout<<"not found"<<endl;
    else
    {
        while(current!=NULL)
        {
            if(current->data==value)
            {
                ck=1;
                break;
            }
            else if(current->data<value)
                current=current->right;
            else
                current=current->left;
        }
        if(ck==1)
            cout<<"found"<<endl;
        else
            cout<<"not found"<<endl;
    }
}
int insrt(int value)
{
    struct node *current;
    struct node *temp=new node();
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
        printf("root--%d--root data--%d\n\n",root,root->data);
    }
    else
    {
        printf("root--%d--root data--%d\n",root,root->data);
        current=root;
        x=root;
        while(x!=NULL)
        {
            if(value>current->data)
            {
                if(current->right==NULL)
                {
                    x=current->right;
                    current->right=temp;
                    current=current->right;
                    printf("current--%d--current data--%d\n\n",current,current->data);
                }
                else
                {
                    current=current->right;
                    printf("current--%d--current data--%d\n",current,current->data);
                }
            }
            else
            {
                if(current->left==NULL)
                {
                    x=current->left;
                    current->left=temp;
                    current=current->left;
                    printf("current--%d--current data--%d\n\n",current,current->data);
                }
                else
                {
                    current=current->left;
                    printf("current--%d--current data--%d\n",current,current->data);
                }
            }
        }
    }
}
int main()
{
    insrt(23);
    insrt(17);
    insrt(31);
    insrt(19);
    insrt(25);
    insrt(29);
    insrt(17);
    insrt(21);
    insrt(11);
    insrt(33);
    srch(23);

}
