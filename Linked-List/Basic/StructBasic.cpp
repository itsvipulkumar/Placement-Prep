#include <bits/stdc++.h>
using namespace std;
struct Student
{
    int roll;
    string name;
    int age;
   
   void printInfo()
   {
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<roll<<endl;
   }

};
int main()
{
    Student vipul;
    vipul.age = 22;
    vipul.name = "Vipul";
    vipul.roll = 62;


    vipul.printInfo();
    Student madhav={21,"Madhav",16};
    madhav.printInfo();

    
    return 0;
}