#include<bits/stdc++.h>
using namespace std;
void printCounting(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    printCounting(n-1);
}
int TwoPowerN(int n)
{

    if(n==0)
    return 1;

   int ans=2*TwoPowerN(n-1);
    return ans;
     
}
int fact(int n)
{
    if(n==0)
    return 1;

    int ans=n*fact(n-1);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    // cout<<fact(n);

    // cout<<"2 ki power n : "<<TwoPowerN(n)<<endl;

    printCounting(n);
     return 0;
}