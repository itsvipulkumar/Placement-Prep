#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    // Your code here
    vector<int> v;
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        for (int j = i; j <n; j++)
        {
            sum += arr[j];
            // cout<<"sum "<<sum<<endl;
            if (sum == s)
            {
                // cout<<i+1<< " "<<j+1<<endl;
                v.push_back(i+1);
                v.push_back(j+1);
               return v;
            }
            if (sum > s)
                break;
        }
        sum = 0;
        v.clear();
    }
    if(v.size()==0)
    {
        v.push_back(-1);
    }
    return v;
   
}
int main()
{
    vector<int> arr{1,2,3,7,5};
    int s=12;
    int n=5;
    vector<int> v;
    v=subarraySum(arr,n,s);
    for(auto i:v)
    cout<<i<<endl;
}