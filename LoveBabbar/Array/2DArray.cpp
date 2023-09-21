#include <bits/stdc++.h>
using namespace std;

int largestSum(vector<vector<int>> &arr, int n)
{
    int sum = 0;
    int max=-1;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
        sum=0;
    }
   return max;
}
void rowWiseSum(vector<vector<int>> &arr, int n)
{
    int sum = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        ans.push_back(sum);
        sum = 0;
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
void searchElement(int arr[][3], int key, int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                flag = 1;
            }
        }
        cout << endl;
    }
    if (flag == 1)
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;
}
void printingArray(int arr[][3], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // printing
    int n = sizeof(arr) / sizeof(arr[0]);

    // printingArray(arr, n);
    // int key = 7;
    // searchElement(arr, key, n);

    vector<vector<int>> nums{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   
    rowWiseSum(nums, 3);
    cout <<"Larget sum : "<< largestSum(nums,3)<<endl;
     return 0;
}

// 1 2 3
// 4 5 6
// 7 8 9
