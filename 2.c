#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("greatest number is %d",a);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("greatest number is %d",b);
        }
    }
    else if(c>a)
    {
    if(c>b)
        {
    printf("greatest number is %d",c);
    }
    }

}
