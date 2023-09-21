#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*

    int arr[]={1,2,3,5};

    cout << "Addres of arr: " << arr << endl; // Addres of arr: 0x61ff00
    cout << "Addres of arr: " << &arr << endl; // Addres of arr: 0x61ff00
    cout << "Addres of arr [0]: " << &arr[0] << endl; // Addres of arr: 0x61ff00
    cout << "Addres of arr[1]: " << &arr[1] << endl;  // Addres of arr: 0x61ff04
    cout << "Value at 1st index of arr( base address): " << *arr << endl; // Value at 1st index of arr:1
    cout << "Value at 2nd index of arr" << *arr + 1 << endl; // Value at 2nd index of arr 2

    cout << "Value at arr[0] " << arr[0] << endl; //  Value at arr[0] 1
    cout << "Value at 3rd index of arr: " << *(arr + 2) << endl; // Value at 3rd index of arr 3
    cout << "Value at 3rd index of arr: " << *(arr) + 2 << endl; // Value at 3rd index of arr 3


    cout<<arr[1]<<endl;
    cout<<1[arr]<<endl;

    */

   int temp[10]={1,2,3,4,5};

   int *ptr=&temp[0];

   cout << "Size of temp array " << sizeof(temp) << endl; // Size of temp array 40
   cout << "Size of ptr temp[0] " << sizeof(ptr) << endl; // Size of temp array 4
   cout << "Size of ptr temp[0] " << sizeof(*ptr) << endl; // Size of temp array 4
   cout << "Size of ptr temp[0] " << sizeof(&ptr) << endl; // Size of temp array 4

cout<<*ptr+4;

// temp=temp+1;
*ptr=*ptr+2;
cout<<"\nAfter Modification \n";
for(int i=0;i<5;i++)
{
    cout<<temp[i]<< " ";
}
    
}