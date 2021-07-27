#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *creatlinklist(int a[],int size)
{
    struct node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++)
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
void *reverselinklist(struct node *head)
{
    struct node *prev=NULL,*current=head,*New=NULL;
    while(current!=NULL)
    {
        New=current->next;
        current->next=prev;
        prev=current;
        current=New;
    }
    head= prev;
    while(head!=NULL)
    {
       printf("%d->",head->data);
       head=head->next;
    }
    printf("NULL\n");
}
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    struct node *head;
    head=creatlinklist(a,7);
    struct node *newhead=head;
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
    reverselinklist(newhead);
    return 0;
}
