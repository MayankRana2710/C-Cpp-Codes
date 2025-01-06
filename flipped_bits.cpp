#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,count=0;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    x=a^b;
    while(x!=0)
    {
        if(x&1) count++;
        x=x>>1;
    }
    printf("Number of bits to be flipped are: %d",count);
    return 0;
}