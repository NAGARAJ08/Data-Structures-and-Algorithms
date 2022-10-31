#include<bits/stdc++.h>
using namespace std;



int getsum(int n)
{
    if(n==0)
        return n;
    return n+getsum(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of N ";
    cin>>n;

    // //1 method by formuale
    // cout<<n*(n+1)/2;

    // //2nd method by looping
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum+=i;
    // }
    // cout<<sum;



    //Methof 3 using recursion

    int sum = getsum(n);
    cout<<sum;


    return 0;
}