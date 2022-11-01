#include<bits/stdc++.h>
using namespace std;

int large(int arr[],int n)
{
    int max_element = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_element)
        {
            max_element = arr[i];
        }
    }
    return max_element;
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

    cout<<large(arr,n-1);

    return(0);
}