#include<bits/stdc++.h>
using namespace std;
void palin(string s,int ln,int i,int j)
{
    if(ln%2==0&&i==ln/2&&j==ln/2-1)
       {
    cout<<"palindrom";
    return;
       }
    else if(ln%2!=0&&i==j)
    {
        cout<<"palindrom";
        return;
    }
    else if(s[i]==s[j])
        {
            return palin(s,ln,i+1,j-1);
        }
    else
    {
        cout<<"not palindrom";
        return;
    }
}
int main()
{
    int ln,i=0,j;
    string s="m";
    ln=s.size();
    j=ln-1;
    palin(s,ln,i,j);

}
