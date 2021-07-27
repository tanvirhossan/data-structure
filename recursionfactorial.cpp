#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
        else
        {
    int f=n*factorial(n-1);
    cout<<"f-"<<n<<"-"<<f<<endl;
    return f;
        }
}
int main()
{
    int x,result;
   cin>>x;
    result=factorial(x);
    cout<<result<<endl;
}
