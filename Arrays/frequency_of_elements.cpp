#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto it:mp)
    {
        cout<<it.first<<" occurs "<<it.second<<" times ";
        cout<<"\n";
    }

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

    frequency(arr,n);

    return(0);
}