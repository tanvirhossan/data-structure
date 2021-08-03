#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *creatlinklist(int arr[] , int size)
{
   struct node *head=NULL,*current=NULL,*temp=NULL;
   int i;
   for(i=0;i<size;i++)
   {
   temp=(struct node *)malloc(sizeof(struct node));
   temp->data = arr[i];
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
}
int main()
{
    int arr[4]={2,5,7,9};
    struct node *head;
    head=creatlinklist(arr,4);
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL");

}
