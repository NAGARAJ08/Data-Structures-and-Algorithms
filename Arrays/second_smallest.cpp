#include<bits/stdc++.h>
using namespace std;

int secondsmallest(int arr[],int n)
{
    int first = INT_MAX,second = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<first)
        {
            second = first;
            first = arr[i];
        }
        else if(second>arr[i])
        {
            second = arr[i];
        }
    }
    return second;

}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: \t";
    cin>>n;

    cout<<"Enter the elements in the array: \t";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<secondsmallest(arr,n);

    return(0);
}