#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (key > arr[mid])
    {
         binarySearch(arr, mid + 1, e, key);
    }
    else
         binarySearch(arr, s, mid - 1, key);
}
int linearSearch(vector<int> &arr, int i, int key)
{
    if (i > arr.size() - 1)
    {
        return -1;
    }

    if (key == arr[i])
        return i;
    linearSearch(arr, i + 1, key);
}
int getSum(vector<int> &arr, int i, int sum)
{
    if (i == arr.size())
    {
        return sum;
    }
    sum += arr[i];
    cout << arr[i] << " " << sum << endl;
    getSum(arr, i + 1, sum);
}
bool isSorted(vector<int> &arr, int size)
{
    if (size == arr.size() - 1)
    {
        return true;
    }
    if (arr[size] > arr[size + 1])
    {
        return false;
    }
    else
        return isSorted(arr, size + 1);
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int n = arr.size();
    // cout << isSorted(arr, size) << endl;

    // cout << "Sum is : " << getSum(arr, 0,0) << endl;

    //    cout<< linearSearch(arr,0,4)<<endl;
    cout << binarySearch(arr, 0, n - 1, 1) << endl;
}