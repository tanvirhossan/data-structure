#include<bits/stdc++.h>
using namespace std;
/*int modular_arithmatic(int x, int n, int m)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else if(n%2==0)
        return ((modular_arithmatic(x,n/2,m))%m)*((modular_arithmatic(x,n/2,m))%m);
    else
        return ((x%m)*modular_arithmatic(x,(n-1),m))%m;
}*/
int modular_arithmatic(int x, int n, int m)
{
    if(n==0)
        return 1;
    //else if(n==1)
        //return x;
    else if(n%2==0)
        return (modular_arithmatic(x,n/2,m)*modular_arithmatic(x,n/2,m))%m;
    else
        return (x%m)*(modular_arithmatic(x,(n-1),m))%m;
}
int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    cout<<modular_arithmatic(x,n,m);
}
