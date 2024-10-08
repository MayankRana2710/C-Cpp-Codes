#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Entering elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Appending into map: "<<endl;
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    cout<<"Enter no. of numbers: "<<endl;
    int q;
    cin>>q;
    cout<<"Enter numbers: "<<endl;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;;
    }
}