//Perfect Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin >> num;
    int sum;
    bool per = false;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum = sum+i;
            if(sum==num){
                cout<<"Perfect number";
                break;
            }
        }
    }
    

    if(!per)
    {
        cout<<"NO Perfect number";
    }
    return 0;

}