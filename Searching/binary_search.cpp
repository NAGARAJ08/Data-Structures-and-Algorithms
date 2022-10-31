#include <bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int key,int low,int high)
{
    
    while(low<=high)
    {
        int mid = low + (high-low)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
    }
    return -1;
}



int main()
{
    int n,key;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key to be found: ";
    cin>>key;

    int ans = binary_search(arr,key,0,n-1);
    if(ans==-1)
    {
        cout<<"Key is not found";
    }
    else{
        cout<<"Key is found at "<<ans<<" location";
    }
    return 0;


}