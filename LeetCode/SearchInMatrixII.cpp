#include <bits/stdc++.h>
using namespace std;

void searchMatrix(vector<vector<int>> &matrix, int target)
{
 int row=0;
 int n=matrix.size()-1;
 int col=matrix[0].size()-1;

 cout<<row<<" "<<col<<" "<<n;

while(row!=n && col>=0)
{
    if(target==matrix[row][col])
    {
        cout<<"Yes";
        cout<<row<<" : "<<col<<endl;
        break;
    }
    else if(target<matrix[row][col])
    {
        col=col-1;
    }
    else if(target>matrix[row][col])
    {
        row=row+1;
    }
}

}

int main()
{
// vector<vector<int>> matrix{{ 1, 4, 7, 11, 15 }, {2, 5, 8, 12, 19 }, {3, 6, 9, 16, 22 }, {10, 13, 14, 17, 24 }, {18, 21, 23, 26, 30 }};
vector<vector<int>> matrix{{-1,3}};
 int target =3;
searchMatrix(matrix, target);
}