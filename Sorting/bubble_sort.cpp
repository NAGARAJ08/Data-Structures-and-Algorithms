#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;++i)
    {
        int swapped = 0;
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            break;
        }
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

    bubble_sort(arr,n);

    cout<<"The sorted Array is: "<<endl;
    printArray(arr,n);
    return 0;
}