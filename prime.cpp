#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cout<<"enter a number :";
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number";
            count=0;
            break;
        }
    }
    if(count)
        cout<<"given number  is prime";
    return 0;
}