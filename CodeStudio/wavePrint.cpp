#include<bits/stdc++.h>
using namespace std;
void wavePrint(vector<vector<int>> &nums)
{
    int n=nums.size();
     int nRows=n;
     int mCols=n;
    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < nRows; j++)
            {
                cout << nums[j][i] << " ";
                // v.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                cout << nums[j][i] << " ";
                // v.push_back(arr[j][i]);
            }
        }
        cout<<endl;
    }
}

    int main()
{
   
    vector<vector<int>> nums{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    wavePrint(nums);

   
    
    return 0;
}