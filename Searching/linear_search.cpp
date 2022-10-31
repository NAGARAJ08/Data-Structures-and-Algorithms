 //It is the simplest searching algorithm.

 #include <bits/stdc++.h>
 using namespace std;




int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}




int main()
 {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n],key;
    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the key element to be found: ";
    cin>> key;

    int answer = linear_search(arr,n,key);

    (answer == -1) ? cout<<"Element not found " : cout<< "Element Found at index : "<<answer;
    
    return 0;

 }


 //TC : O(n)
 //SC : O(1)