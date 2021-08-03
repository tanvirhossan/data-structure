#include<bits/stdc++.h>
using namespace std;
struct node *head=NULL;
struct node
{
    int data;
    struct node *next;
};
void enqueue(int x)
{
    struct node *temp,*crnt,*hd;
    temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        crnt=temp;
    }
    else
    {
        crnt->next=temp;
        crnt=temp;
    }
    hd=head;
    while(hd!=NULL)
    {
        cout<<hd->data<<" ";
        hd=hd->next;
    }
    cout<<endl;
}
void dequeue()
{
    if(head==NULL)
        cout<<"underflow"<<endl;
    else
    {
    struct node *hed;
    head=head->next;
    hed=head;
    if(hed!=NULL)
    {
    while(hed!=NULL)
    {
        cout<<hed->data<<" ";
        hed=hed->next;
    }
    cout<<endl;
    }
    else
    {
        cout<<"empty"<<endl;
    }
    }
}
int main()
{
    enqueue(10);
    enqueue(7);
    enqueue(13);
    dequeue();
    dequeue();
    enqueue(5);
    enqueue(2);
    dequeue();
    dequeue();
    dequeue();
    dequeue();

}
