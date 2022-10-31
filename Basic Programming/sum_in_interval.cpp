#include<bits/stdc++.h>
using namespace std;


int rec(int a,int b)
{
    if(a>b)
        return 0;
    
    return a + rec(a+1,b);
}
int main()
{
    int n,n1;
    cin >> n >> n1;


    // //Method 1 
    // int sum=0;
    // for (int i = n; i <= n1; i++)
    //     sum = sum + i;

    // cout<<sum;


    // //Method 2 using formula
    // int sum = n1*(n1+1)/2-n*(n+1)/2+n;
    // cout<<sum;

    //Method 3 recursion
    int sum = rec(n,n1);
    cout<<sum;


    return 0;
}