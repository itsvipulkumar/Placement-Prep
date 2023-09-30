#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubble_sort(arr, n - 1);
}
int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int ans = power(a, b / 2);
    if (b % 2 == 0)
        return ans * ans;
    else
        return a * ans * ans;
}
int aPowb(int a, int b)
{
    // if(b==0)
    // return 1;

    // int ans = a * aPowb(a,b=b-1);
    // return ans;

    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    int ans = aPowb(a, b / 2);

    if (b % 2 == 0)
        return ans * ans;
    else
        return a * ans * ans;
}
void reverseString(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    return reverseString(str, i, j);
}
int main()
{
    string str = "vipul";

    // reverseString(str,0,4);
    // cout<<str<<endl;
    int a = 3;
    int b = 2;
    // cout<<aPowb(a,b);
    // cout << power(10,5);
    vector<int> arr{1, 6, 2, 9, 8, 10, 34, 7};
    int n = arr.size();
    bubble_sort(arr, n);
    for (auto i : arr)
        cout << i << " ";

    return 0;
}