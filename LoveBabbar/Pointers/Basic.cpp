#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;

    cout << "&a = "<< & a << endl; // 0x61ff08
    cout << "ptr = "<< ptr+4<< endl;    // 0x61ff08
    cout << "&ptr = "<< &ptr << endl;    // 0x61ff08
    cout << "*ptr = s"<<*ptr<<endl; //10

    cout << "++a = "<< ++a << endl; // 11
    cout << "++ *ptr = " << ++*(ptr) << endl; // 11

    cout<<"Size of integer : "<<sizeof(a)<<endl;
    cout<<"Size of Pointer : "<<sizeof(ptr)<<endl;
    cout<<"Size of Pointer : "<<sizeof(*ptr)<<endl;


}