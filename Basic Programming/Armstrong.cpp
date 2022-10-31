/*
What is an Armstrong Number
Any number that satisfies the following format –

abcd… = an + bn + cn + dn + …
Where n is the order(length/digits in number)
That is for any number num if the sum of individual digits is raised to the power of order if the result is equal to the number itself then it is an Armstrong number.

*/

// Armstrong number is any number following the given rule
// abcd... = a^n + b^n + c^n + d^n + ...
// Where n is the order(length/digits in number)

// Example = 153 (order/length = 3)
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// Example = 1634 (order/length = 4)
// 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634

// number of digits in a number is order

#include<bits/stdc++.h>
using namespace std;


int order(int x)
{
    int len = 0;
    while(x)
    {
        len++;
        x = x/10;
    }
    return len;

}

bool armstrong(int num,int len)
{
    int sum=0,temp,digit;
    temp = num;

    while(temp!=0)
    {
        digit = temp%10;
        sum = sum + pow(digit,len);
        temp /= 10;
    };
    return num==sum;
    
}

int main()
{
    int num;
    cin>>num;

    int len = order(num);

    if(armstrong(num,len))
        cout<<num <<"is a armstrong";
    else
        cout<<num <<"is not a armstrong";

    return 0;
}