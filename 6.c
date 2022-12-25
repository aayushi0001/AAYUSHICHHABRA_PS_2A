#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the sides of the triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    {
        printf("the triangle is equilateral");
    }
    else if (a==b||b==c||c==a)

    {
        printf("the triangle is isoclese");
    }
    else
    {
        printf("the triangle is scalene");
    }
}
