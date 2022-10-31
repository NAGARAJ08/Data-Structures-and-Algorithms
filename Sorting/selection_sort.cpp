#include<bits/stdc++.h>
using namespace std;



void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}




//printting the array
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,n);

    cout<<"The sorted Array is: "<<endl;
    printArray(arr,n);
    return 0;
}