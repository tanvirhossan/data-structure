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
    struct node *temp=NULL,*head=NULL,*current=NULL,*rsrv=NULL,*hd=NULL,*h=NULL,*rs=NULL;
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
    hd=rsrv;
    int v;
    cin>>v;
    while(hd->data!=v)
    {
        h=hd;
        hd=hd->next;
    }
    h->next=hd->next;
    rs=rsrv;
        while(rs!=NULL)
    {
        printf("%d->",rs->data);
        rs=rs->next;
    }
    cout<<"NULL"<<endl;
}
