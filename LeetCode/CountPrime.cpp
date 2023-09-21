#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l = 4;
    int n = 10;
    int count = 0;
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
        if (prime[i] == 1)
            count++;
    }
    cout << count << endl;
    
}