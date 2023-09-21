#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    int flag = 0;
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag++;
        }
    }
    if (flag == 0)
        return true;
    else
        return false;
}

void SieveOfErat(int L, int R)
{
    int count = 0;
    vector<bool> prime(R + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= R; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j <= R; j = j + i)
            {
                prime[j] = 0;
            }
        }
       
    }

    for (int i = L; i <= R; i++)
    {
        if (prime[i])
            count++;
    }
    cout << "Prime In range is " << count << endl;
}

int main()
{
    int L = 1;
    int R = 10;
    int count = 0;
    // for (int i = L; i <= R; i++)
    // {
    //     if (isPrime(i))
    //     {
    //       count++;
    //     }
    // }
    // cout<<count;

    // #2

    SieveOfErat(L, R);
}