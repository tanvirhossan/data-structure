#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node *next;
};
struct node *creatlinklist(int a[], int size)
{
    struct node *head=NULL,*current=NULL,*temp=NULL;
    for(int i=0;i<size;i++)
    {
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=a[i];
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        current=temp;
    }
    else
    {
        current->next=temp;
        current=temp;
    }
    }
    return head;
};
int searchelement(struct node *head, int v)
{
    int index=1;
    while(head!=NULL)
    {
        if(head->data==v)
            return index;
        index++;
        head=head->next;
    }
    return -1;
}
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    struct node *head;
    head=creatlinklist(a,9);
    printf("%d",searchelement(head,7));
}
