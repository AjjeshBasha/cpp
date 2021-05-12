#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,r;
    cin>>n;
    while(n>=10)
    {
        while(n)
        {
            r=n%10;
            n=n/10;
            res=r*r+res;
        }
        n=res;
        res=0;

    }
    if(n==1)
       cout<<"happy number";
       else
       cout<<"not happy number";
}
