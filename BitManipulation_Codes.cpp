#include <bits/stdc++.h>
using namespace std;

//
//
/* Problem_1. Count set bits in an integer. */
//
//
void count_set_bits()
{
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0)
    {
        if(n&1) count++;
        n=n>>1;
    }
    printf("%d",count);
}

//
//
/*Problem_2. Find the two non-repeating elements in an array of repeating elements. */
//
//

//Enter only two distinct elements and others repeated 2 times
void two_distinct_element()
{
    int n,ele;
    vector<int> v;
    //the length of the array will always be even considering the question
    cout<<"Enter length of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter arr["<<i<<"]: ";
        cin>>ele;
        v.push_back(ele);
    }

    int ans;
    for(int i=0;i<v.size();i++)
    {
        ans^=v[i];
    }
    int seperator=(ans&ans-1)^ans;
    int b1=0,b2=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]&seperator) b1^=v[i];
        else b2^=v[i];
    }
    cout<<b1<<" is the first element and "<<b2<<" is the second element";
}

//
//
/*Problem_3. Program to find whether a no is power of two. */
//
//
void power_of_two()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<1) printf("No, it is not a power of 2.");
    else if(n&(n-1)) printf("No, it is not a power of 2.");
    else printf("Yes, it is a power of 2.");
}

//
//
/*Problem_4. Find position of the only set bit. */
//
//
void pos_of_setbit()
{
    int n,pos=1;
    cout<<"Enter a number with only one set bit: ";
    cin>>n;
    //the first pos is taken to be 1
    while(n!=0)
    {
        if(n&1) break;
        pos++;
        n=n>>1;
    }
    printf("The position of only set bit is: %d",pos);
}


//
//
/*Problem_5. Count number of bits to be flipped to convert A to B. */
//
//
void flipped_bits()
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
}

//
//
/*Problem_6. Count total set bits in all numbers from 1 to n. */
//
//
int power(int n)
{
    int pow=0;
    while(n>=(1<<pow+1))
    {
        pow++;
    }
    return pow;
}
int count_setbits(int n)
{
    if(!n) return 0;
    int x=power(n);
    int bits_0_to_2x=(1<<(x-1))*x;
    int bits_2x_to_n=n-(1<<x)+1;
    int rest=n-(1<<x);
    int ans=bits_0_to_2x+bits_2x_to_n+count_setbits(rest);
    return ans;
}
void count_setbit_1toN()
{
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int ans=count_setbits(n);
    cout<<ans;
}

//
//
/*Problem_7. Calculate square of a number without using *, / and pow(). */
//
//
void sq_without_pow_X()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num=n,pow=0,square=0;
    while(n!=0)
    {
        if(n&1) square+=(num<<pow);
        pow++;
        n=n>>1;
    }
    cout<<square;
}

//
//
/*Problem_8. Divide two integers without using multiplication, division and mod operator*/
//
//
void division_without_division()
{
    int divisor,dividend,pow = 0,quotient=0;
    cout<<"Enter Numerator: ";
    cin>>dividend;
    cout<<"Enter Denominator: ";
    cin>>divisor;
    bool sign=true;
    if((dividend<0&&divisor>0)||(dividend>0&&divisor<0)) sign=false;
    if(divisor==0) 
    {
        cout<<"Undetermined";
        return;
    }
    int n=abs(dividend);
    int d=abs(divisor);
    while (n>=(d*(1<<pow)))
    {
        pow++;
    }
    while (n>=d)
    {
        if(n-d*(1<<pow)>=0)
        {
            n-=d*(1<<pow);
            quotient+=1<<pow;
        }
        pow--;
    }
    if(sign) cout<<quotient;
    else cout<<-quotient;
}

//
//
/*Problem_9. Power Set*/
//
//
void power_set()
{
    int n,ele;
    vector<int> arr;
    cout<<"Enter size of array you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter distinct elements: ";
        cin>>ele;
        arr.push_back(ele);
    }
    vector<vector<int>> powerSet;
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> subArray;
        int count=0;
        while(count<n)
        {
            if(i&(1<<count)) subArray.push_back(arr[count]);
            count++;
        }
        powerSet.push_back(subArray);
    }
    for(int i=0;i<powerSet.size();i++)
    {
        for(int j=0;j<powerSet[i].size();j++)
        {
            cout<<powerSet[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    count_set_bits();
    return 0;    
}
