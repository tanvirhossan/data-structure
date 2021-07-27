#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int i,x,n,p;
    struct node *temp=NULL,*tmp=NULL,*head=NULL,*current=NULL,*rsrv=NULL,*trv=NULL,*rs=NULL;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        temp=new node();
        temp->data=x;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
            rsrv=temp;
        }
        else
        {
            current->next=temp;
            current=temp;
        }
    }
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    cout<<"NULL"<<endl;
    int index=1;
    trv=rsrv;
    while(index!=3)
    {
        rs=trv;
        trv=trv->next;
        index++;
    }
    tmp=new node();
    tmp->data=6;
    tmp->next=trv;
    rs->next=tmp;
        while(rsrv!=NULL)
    {
        printf("%d->",rsrv->data);
        rsrv=rsrv->next;
    }
    cout<<"NULL"<<endl;
}
