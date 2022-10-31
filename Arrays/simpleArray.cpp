#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; //number of elements 
    cout<<"Enter the number of elements in the array: \t";
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"Printing the elements of the array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;

}