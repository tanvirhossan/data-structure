#include<bits/stdc++.h>
using namespace std;
#define limit 5
int top=-1;
int stk[limit];
void push(int x)
{
    if(top>=limit-1)
        cout<<"overflow"<<endl;
    else
    {
        top++;
        stk[top]=x;
        int i;
        for(i=0; i<=top; i++)
            cout<<stk[i]<<" ";
        cout<<endl;
    }
}
void pop()
{
    if(top<0)
        cout<<"underflow"<<endl;
    else if(top==0)
    {
        top=-1;
        cout<<"empty"<<endl;
    }

    else
    {
        top--;
        int i;
        for(i=0; i<=top; i++)
            cout<<stk[i]<<" ";
        cout<<endl;
    }
}
int main()
{   push(2);
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

