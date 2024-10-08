#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max=INT_MIN;
    int min=INT_MAX;
    vector<int> v={1,2,3,4,5,6,7,8,8,9};
    cout<<"Entering into vector: "<<endl;
    for(auto it=v.begin();it<v.end();it++)
    {
        if(max<*it)
        {
            max=*it;
        }
        if(min>*it)
        {
            min=*it;
        }
    }
    auto it=find(v.begin(),v.end(),max);
    v.erase(it);
    it=find(v.begin(),v.end(),min);
    v.erase(it);
    max=INT_MIN;
    min=INT_MAX;
    for(auto it=v.begin();it<v.end();it++)
    {
        if(max<*it)
        {
            max=*it;
        }
        if(min>*it)
        {
            min=*it;
        }
    }
    cout<<max<<endl;
    cout<<min;
}