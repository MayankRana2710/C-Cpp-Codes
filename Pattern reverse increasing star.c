#include <stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
