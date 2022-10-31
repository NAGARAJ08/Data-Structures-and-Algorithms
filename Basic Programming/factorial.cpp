#include<bits/stdc++.h>
using namespace std;



int fact(int n)
{
      if(n==0)
       return 1;
    return n * fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

    // int p=1;
    // for(int i=1;i<=n;i++)
    // {
    //     p *= i;
    // }
    int p = fact(n);
    cout<<p;
    return 0;

}