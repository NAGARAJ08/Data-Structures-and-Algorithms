#include<bits/stdc++.h>
using namespace std;

int order(int x)
{
    int len=0;
    while(x)
    {
        len++;
        x = x/10;
    }
    return len;
}
void armstrong(int low,int high){

    for(int i=low;i<=high;i++)
    {
        int sum = 0,temp,digit,len;
        temp = i;

        len = order(i);

        while(temp!=0)
        {
            digit = temp %10;
            sum = sum+pow(digit,len);
            temp /= 10;
        };
        if(sum==i)
            cout<<i<<" ";
    }
}
int main()
{
    int low,high;
    cin >> low >> high;

    armstrong(low,high);

    return 0;
}