#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> nums{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n = 3;
      int row=nums.size();
      int col=nums[0].size();
     int startRow=0;
     int endRow=row-1;

     int startCol=0;
     int endCol=col-1;


     int total=row*col;
     int count=0;
    while (count < total)
    {
        // start row
        for (int i = startCol; count < total && i <=endCol; i++)
        {
            cout<<nums[startRow][i]<<" ";
            count++;
         }
         startRow++;
         // end col
         for (int i = startRow; count < total && i <=endRow; i++)
         {
            cout<<nums[i][endCol]<<" ";
            count++;
         }
         endCol--;
         for (int i = endCol; count < total && i >= startCol; i--)
         {
            cout<<nums[endRow][i]<<" ";
            count++;
         }
         endRow--;
         for (int i = endRow; count < total && i >= startRow; i--)
         {
            cout<<nums[i][startCol]<<" ";
            count++;
         }
         startCol++;


    }
   
}

// 1 2 3
// 4 5 6
// 7 8 9