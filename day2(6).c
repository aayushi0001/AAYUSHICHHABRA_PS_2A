#include<stdio.h>
void main()
{
    int i,j,a;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=i;j<2*i;j++)
        {
            printf("%d",j);
        }
        a=2*(i-1);
        for(j=1;j<=i-1;j++)
        {
            printf("%d",a--);
        }
        printf("\n");
    }
}
