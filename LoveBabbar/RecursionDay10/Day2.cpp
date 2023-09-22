#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n, vector<string> &arr)
{
    if(n==0)
    {
        return;
    }
 // n= 432 =>> four three two

    sayDigit(n / 10,arr);
    int rem=n%10; //  2

    
    cout<<arr[rem]<<" ";
   
}
int fibonnacciS(int n){


if(n==0 )
return 0;
if(n==1)
return 1;

    int ans = fibonnacciS(n - 1) + fibonnacciS(n-2);
    return ans;
}
void reactAtHome (int src,int dest)
{
  if(src==dest)
  {
    cout<<"Pooch gya hu ! ";
    return;
  }
  cout<<src<<" ";
  reactAtHome(src+1,dest);

}
int main()
{
    int dest=10;
    int src=1;

    // reactAtHome(src,dest);


    int n;
    cin>>n;
    vector<string> arr{"zero","one","two","three","four","five","six","seven","eight","nine"};
    // cout<<fibonnacciS(n);
    sayDigit(n,arr);
}