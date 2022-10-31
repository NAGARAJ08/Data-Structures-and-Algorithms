#include<bits/stdc++.h>
using namespace std;


bool is_prime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cout<<"Enter the Number ";
    cin >> n;

    if(is_prime(n))
    {
        cout<< "It is a prime No";
    }
    else{
        cout<< "It is Not a prime No";
    }

    return 0;
}