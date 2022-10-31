#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // //This is Brute Force method
    // if(n>0)
    // {
    //     cout<<"Positive";
    // }
    // else if(n<0){
    //     cout<<"Negative";
    // }
    // else{
    //     cout<<"Zero";
    // }


    //this is ternary method.
    if(n==0)
        cout<<"Zero";
    else (n>0)?cout<<"Positive":cout<<"Negative";

    return 0;
}