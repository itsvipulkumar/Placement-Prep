#include <bits/stdc++.h>
using namespace std;

void fun (int &n)
{
    n=n+1;
}

int main()

{
    int i = 5;
    int &j = i;

    i = i + 1;
    cout << i << endl; // 6
    j = j + 1;
    cout << i << endl; // 7

    j = i + 1;
    cout << i << endl; // 8

cout<<"\npass by reference in function \n";
    int n=10;
    cout << n << endl;

    fun(n);
    cout<<n<<endl;
}