#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int rem,ans;
    while(num!=0)    
    {
        rem = num%10;
        ans = ans*10+rem;
        num = num/10;

    }


    cout<<ans;
    return 0;
}