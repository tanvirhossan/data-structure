// C++ code to implement Fibonacci series
#include <bits/stdc++.h>
using namespace std;

// Function for fibonacci

int fib(int n)
{
    // Stop condition
    if (n <= 1)
        return n;

    // Stop condition
    //if (n == 1 || n == 2)
        //return 1;

    // Recursion function
    else
    {
        int f=(fib(n - 1) + fib(n - 2));
        cout<<n<<" "<<f<<endl;
        return f;
    }
}

// Driver Code
int main()
{
    // Initialize variable n.
    int n ;
    cin>>n;
   // cout<<"Fibonacci series of"<<" "<< fib(n) <<" "<<"numbers is: "<<endl;

    // for loop to print the fiboancci series.
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" "<<endl<<endl;
    }
    return 0;
}
