#include <stdio.h>

int main()
{
    int n,i,j,l[100],item;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("l[%d]= ",i);
        scanf("%d",&l[i]);
    }
    printf("Element to find = ");
    scanf("%d",&item);
    for(j=0,j<n;j++)
    {
        if(item==l[j])
        printf("Yes");
        else
        printf("No");
    }

    return 0;
}