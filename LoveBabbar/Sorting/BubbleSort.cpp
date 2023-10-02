#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1, 4, 3, 9, 7, 12, 10};

    for(int i=0;i<arr.size();i++)
    {
        int isSwap=0;
        for (int j = i; j < arr.size(); j++)
        {
 
             if(arr[j]>arr[j+1])
             {
                swap(arr[j],arr[j+1]);
                isSwap=1;
             }
        }
        if (isSwap==0)
        break;
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
}