#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
        vector<int> temp;
        int left=0;
        int right=mid+1;
        int k=0;
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                    left++;
               
            }
            else
            {
                    temp.push_back(arr[right]);
                    right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=0;i<temp.size();i++)
        {
            arr[i]=temp[i];
        }
}

void mergeSort(vector<int> &arr, int low, int high)
{
     if(low>=high)
     {
        return;
     }
     int mid=(low+high)/2;
     mergeSort(arr, low, mid);
     mergeSort(arr, mid + 1, high);

     merge(arr,low,mid,high);
}

int main()
{
    vector<int> arr{34,12,67,10,45,33,40};
    int n=arr.size();
    int low=0;
    int high=n-1;

    mergeSort(arr, low, high);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}