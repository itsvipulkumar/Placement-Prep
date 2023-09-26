#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;

    cout << " value of a " << a << endl;               // value of a 10
    cout << " value of ptr " << *ptr << endl;          // value of a 10
    cout << " value of doubel ptr " << **dptr << endl; // value of a 10

    cout << sizeof(a) << endl;    // 4
    cout << sizeof(ptr) << endl;  // 4
    cout << sizeof(dptr) << endl; // 4

    cout << *ptr + 1<<endl;   // 11
    cout << **dptr + 1<<endl; // 11

    cout << &a << endl; // 0x61ff08
    cout << ptr << endl; // 0x61ff08
    cout << &ptr << endl; // 0x61ff04
    cout << dptr << endl; // 0x61ff04

    
}