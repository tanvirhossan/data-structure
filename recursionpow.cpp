#include<bits/stdc++.h>
using namespace std;
int pow(int x , int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
        return x*pow(x,(n-1));
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);

}
/*int pow(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return pow(x,n/2)*pow(x,n/2);
    else
        return x*pow(x,(n-1));
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);

}*/
