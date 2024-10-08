#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
    { 
        int nums[]={3,1,-2,-5,2,-4};
        int p=0;
        for(int i=0;i<6;i++)
        {
            if(nums[i]>0) 
            {
                int temp=nums[i];
                nums[i]=nums[p];
                nums[p]=temp;
                p=p+2;
            }
        }
        for(int i:nums)
        {
            cout<<i<<endl;
        };
    }