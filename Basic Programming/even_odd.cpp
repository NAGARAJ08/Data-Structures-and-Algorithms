#include<bits/stdc++.h>
using namespace std;


bool iseven(int n)
{
              //8421
    // 5 -      0101
    // 9 -      1001
    //ans =     0001

    return (!(n & 1));
}
int main()
{
    int n;

    cout<<"Enter the Number";
    cin>>n;
    ////Brute Force Method
    // if(n%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"odd";
    // }
    //Bitwise operator method
    if(iseven(n))
        cout<<"Even";
    else{
        cout<<"ODD";
    }
    

    return 0;
}


// //Ternary Method
// n%2==0 ?cout<<"EVEN":cout<<"ODD";
