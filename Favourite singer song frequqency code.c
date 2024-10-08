#include <stdio.h>

int main() 
{
    int n,i,list[100],j,k,sum=1,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("LIST[%d]= ",i);
        scanf("%d",&list[i]);
    }
    for(j=0;j<n;j++)
    {
        c=0;
        for(k=0;k<n;k++)
        {
            if(list[j]==list[k])
            c++;
            else;
        }
        if(sum<c)
        sum=c;
        else;
    }
    printf("Code is working %d",sum);
    return 0;