#include <stdio.h>
#include <conio.h>

int main()
{ 
    int a,b,num=1,sum=1;
    float n;
    scanf("%d",&a);
    scanf("%d",&b);
    if (b==0)
    printf("%d",1);
    else if (b>0)
    {
        while (b>0)
        {
            num*=a;
            b--;
        }
        printf("%d",num);
    }
    else if (b<0)
    {
        b=(-b);
        while (b>0)
        {
            sum*=a;
            n=(float)1/sum;
            b--;
        }
        printf("%f",n);
    }
    else;
    getch();
    return 0;
}
