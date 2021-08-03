#include<bits/stdc++.h>
using namespace std;
//int cnt=0,limit=5;
struct node *head=NULL;
struct node
{
    int data;
    struct node *next;
};
void push(int x)
{
    //if(cnt>=limit)
        //cout<<"overflow"<<endl;
    //else
    //{
        struct node *temp=NULL,*hd=NULL;
        temp=new node();
        temp->data=x;
        temp->next=head;
        head=temp;
        hd=head;
        //cnt++;
        //for(int i=1; i<=cnt; i++)
        while(hd!=NULL)
        {
            cout<<hd->data<<" ";
            hd=hd->next;
        }
        cout<<endl;
    //}
}
void pop()
{
    //if(cnt>0)
    if(head==NULL)
        cout<<"underflow"<<endl;
    else
    {
    struct node *top=NULL,*rs=NULL;
    //top=head;
    head=head->next;
    //free(top);
    rs=head;
    //cnt--;
    //if(cnt==0)
        //cout<<"empty";
    //for(int i=1; i<=cnt; i++)
    if(rs!=NULL)
    {
    while(rs!=NULL)
    {
        cout<<rs->data<<" ";
        rs=rs->next;
    }
    cout<<endl;
    }
    else
        cout<<"empty"<<endl;

    }
    //else
        //cout<<"underflow"<<endl;

}
int main()
{
    push(2);
    push(3);
    push(4);
    pop();
    push(5);
    pop();
    pop();
    push(11);
    //cout<<"top"<<stk[top]<<endl;
    pop();
    pop();
    pop();
    push(2);
    push(3);
    push(4);
    push(2);
    push(3);
    push(4);
    push(4);
    push(4);

}
