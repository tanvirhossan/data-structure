#include<bits/stdc++.h>
using namespace std;
/*int subtract(int a,int b)
{
    //int sub=a-b;
    //cout<<sub<<endl;
}*/
int main()
{
    int a[3]={2,4,7};
    int *ptr =&a[0];
    int i,p=10,k=5;
    cout<<a<<endl;
    cout<<ptr<<endl;
    printf("%d\n",a);
    printf("%d\n",ptr);
    for(i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
        printf("%d\n",*(ptr+i));
        printf("%d\n",ptr+i);
    }
    //int rs=subtract(p,k);
    //cout<<rs<<endl;
    return 0;
}


