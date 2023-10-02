#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1,3,7,5,10,18,12};

    int n=arr.size();

    for(int i=0;i<n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(auto i:arr)
    cout<<i<<" ";
}