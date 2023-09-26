#include<bits/stdc++.h>
using namespace std;
int aPowb(int a,int b)
{
    // if(b==0)
    // return 1;

    // int ans = a * aPowb(a,b=b-1);
    // return ans;

    if(b==0)
    return 1;

    if(b==1)
    return a;

    int ans=aPowb(a,b/2);
     
     if(b%2==0)
     return ans*ans;
     else
     return a*ans*ans;

}
void reverseString(string &str, int i ,int j)
{
    if(i>j)
    {
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
     return reverseString( str,i,j);
}
int main()
{
    string str="vipul";

    // reverseString(str,0,4);
    // cout<<str<<endl;
     int a=3;
     int b=2;
    cout<<aPowb(a,b);

        return 0;
}