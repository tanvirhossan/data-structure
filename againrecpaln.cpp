#include<bits/stdc++.h>
using namespace std;
void palin(string s,int i,int j)
{

    if(s[i]!=s[j])
    {
        cout<<"not palindrom";
        return;

    }
    else
    {
        if(i<j)
            return palin(s,i+1,j-1);
        else
        {
            cout<<"palindrom";
            return;
        }
    }

}
int main()
{
    int ln,i=0,j;
    string s="malayalam";
    ln=s.size();
    j=ln-1;
    palin(s,i,j);

}

