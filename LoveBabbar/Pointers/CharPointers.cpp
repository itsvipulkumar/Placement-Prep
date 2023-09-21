#include<bits/stdc++.h>
using namespace std;
int main()
{
   char ch[5]="avcd";

   char *ptr=&ch[0];
   cout << ch << endl; // avcd
   cout << ch[0] << endl; // a
   cout << *ch << endl; //a
   cout << *ch + 3 << endl; // 100

   cout << ptr << endl; // avcd
   cout << *ptr << endl; // a
   cout << *ptr+1 << endl;  //98


cout<<"\nSingle last character\n";
   char temp='z';

   char *a=&temp;

   cout<<a<<endl;
}