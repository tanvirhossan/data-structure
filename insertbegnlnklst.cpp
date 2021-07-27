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
    struct node *temp=NULL,*head=NULL,*current=NULL,*tmp=NULL,*hd=NULL,*beg=NULL,*tp=NULL,*rsrv=NULL,*lt=NULL,*h=NULL,*ik=NULL;
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
            //rsrvhd=temp;
        }
        else
        {
            //current=rsrvhd;
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
    cin>>p;
    beg=rsrv;
    tmp=new node();
    tmp->data=p;
    tmp->next=beg;
    hd=tmp;
    while(hd!=NULL)
    {
        printf("%d->",hd->data);
        hd=hd->next;
    }
    cout<<"NULL"<<endl;
    h=rsrv;
    while(h!=NULL)
    {
        ik=h;
        h=h->next;
    }
    tp=new node();
    tp->data=57;
    tp->next=h;
    ik->next=tp;
    lt=rsrv;
        while(lt!=NULL)
    {
        printf("%d->",lt->data);
        lt=lt->next;
    }
    cout<<"NULL"<<endl;
}
