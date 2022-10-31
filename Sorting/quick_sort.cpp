#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int low,int high)
{
    int pivot = arr[high]; //taking pivot as last element
    int i = (low -1);

    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);

    return (i+1);

}



void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        //we find pivot such that left of it is small elements and right of it is large elements
        int p = partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);

    }
}


void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
