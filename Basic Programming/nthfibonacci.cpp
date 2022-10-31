#include<bits/stdc++.h>
using namespace std;


//another method 
int Fun(int n)
{
    int a=0,b=1,c,i;

    if(n==0)
    {
        return 0;
    }

    for(i=2;i<=n;i++)
    {
        c = a+b;
        // 0 1 1 2
        //a=1,b=1;
        //c = a+b = 2;
        //a = b = 1
        //b = 2;
        c= a+b;
        a=b;
        b=c;
    }
    return b;
}



//recursion method
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }

    return fib(n-1)+fib(n-2);
}


int main()
{
    int n;
    cin>>n;

    cout<<fib(n);
//    cout<<Fun(n);
    return 0;
}






