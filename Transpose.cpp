#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> m={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m.size();j++)
        {
            m[i][j]=m[j][i];
        }
    }
    for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m.size();j++)
        {
            cout<<m[i][j];
        }
    }
    //kuhfsheuhuahfuhuef
    //cout<<m;
}
