#include<bits/stdc++.h>
using namespace std;



class Solve
{
    public:
    int kthsmall(int arr[],int n,int k)
    {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(arr[i]);
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
    
};

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

    int k;
    cout<<"Enter the Kth Value: \t";
    cin>>k;

    Solve obj;
    cout<<obj.kthsmall(arr,n-1,k);

    return 0;
}