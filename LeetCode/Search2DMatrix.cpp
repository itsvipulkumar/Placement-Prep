#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix[0].size();
    // cout<<n;
    for (int i = 0; i < matrix.size(); i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][n - 1])
        {
            int size = matrix[0].size();

            cout << "yes";
            return true;
            // return binarySearch(matrix[i], target, size);
        }
    }
    return false;
}
int main()
{
    // vector<vector<int>> matrix{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    vector<vector<int>> matrix{{1, 1}};
    int target = 0;
    cout << searchMatrix(matrix, target);
}