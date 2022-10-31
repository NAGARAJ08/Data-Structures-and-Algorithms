//MAXIMUM SUM SUBARRAY 
/*
IT CAN BE DONE USING BRUT FORCE METHOD BUT THE TIME COMPLEXITY IS O(n^2) SO KADANES ALGO IS USED 

KADANE'S ALGORITHM 
O(n);
*/

#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[],int n)
{
    int maxsum=0,cursum=0,i;
    for(i=0;i<n;i++)
    {
        cursum = cursum +a[i];
        if(cursum>maxsum){
            maxsum =cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    return maxsum;
}
int main()
{
    // int M,n;
    //  int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    // n=sizeof(a)/sizeof(a[0]);
    int n;
    cout<<"Enter the number of elements in the array: \t";
    cin>>n;

    cout<<"Enter the elements in the array: \t";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    int M=maxsum(arr,n);
    printf("The maximum sum subarray is %d",M);
    return(0);
}