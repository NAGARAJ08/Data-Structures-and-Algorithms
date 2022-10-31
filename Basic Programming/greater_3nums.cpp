#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    
    // // Method 1:
    // if((a>b) && (a>c))
    // {
    //     cout<<"A is Larger";
    // }
    // else if((b>a) && (b>c))
    // {
    //     cout<<"B is Larger";
    // }
    // else{
    //     cout<<"C is larger";
    // }

    // Method 2:
    int temp,result;

    temp = a > b?a:b;
    result = temp > c?temp : c;
    cout<<result <<" is Larger";

    return 0;
}