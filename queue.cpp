#include<bits/stdc++.h>
using namespace std;
#define limit 3
int qu[limit];
int frnt=0,rear=-1,element=0,i;
void enqueue(int x)
{
    if(element<limit)
    {
        rear=(rear+1)%limit;
        qu[rear]=x;
        element++;
        for(i=0; i<limit; i++)
        {
            cout<<qu[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"overflow"<<endl;
    }
}
void dequeue()
{
    if(element>0)
    {
        qu[frnt]=-1;
        frnt=(frnt+1)%limit;
        element--;
        for(i=0; i<limit; i++)
        {
            cout<<qu[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"underflow"<<endl;
    }
}
int main()
{
enqueue(5);
enqueue(7);
enqueue(9);
dequeue();
dequeue();
enqueue(8);
enqueue(2);
enqueue(11);
dequeue();
enqueue(3);
enqueue(3);
dequeue();
dequeue();
dequeue();
dequeue();
}
