#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)

    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 3};
    int key = 3;
    cout << binarySearch(arr, key);
}