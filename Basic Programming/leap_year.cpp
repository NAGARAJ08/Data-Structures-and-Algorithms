/*
Condtions for Leap Year
Following are the rules to predict if a given is a year leap or not. If any one of the conditions below is met then it's a leap year -
1. If a year is divisible by 400, it's a leap year.
2. If a year is divisible by 4 but not by 100 then its leap year

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the Year "<<endl;
    cin >> year;

    if(year %400==0)
    {
        cout<<year <<" Is a leap Year";
    }
    else if(year %4 ==0 && year %100 != 0)
    {
        cout<<year <<" Is a leap Year";
    }
    else{
        cout<<year <<" Not  a leap Year";
    }
    return 0;
}


