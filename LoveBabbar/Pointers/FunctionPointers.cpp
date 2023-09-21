#include<bits/stdc++.h>
using namespace std;
void print (int *val)
{
    cout<<*val<<endl;
}
void updation (int *val)
{
    *val=*val+1;
}

int getSum(int arr[]) // pointer will be passese -> int *arr
{
    int sum=0;
    int n=sizeof(arr); // not array size -> this is pointer size
    cout<<"Size of pointer: "<<n<<endl;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{

    int a=10;
    int *val=&a;
    print(val);

    cout<<"\n Before updation \n";
    print(val);
    cout<<"\n After updation \n";
    updation(val);
    print(val);



    cout<<"\n Sum of  array element "<<endl;
     int arr[]={1,2,3,4,5};
    cout<<"Sum is "<<getSum(arr);
}