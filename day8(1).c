#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,i;
    float x,y;
    printf("enter the value of a ,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d>0)
    {
        printf("both roots are real and diiff");
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);

    }
    else if(d==0)
    {
        printf("both roots are equal");
       x=y=-b/2*a;
    }
    else
    {
        printf("roots are imaginery");
        x=(-b/2*a)+(i*sqrt(d)/2*a);
        y=(-b/2*a)-(i*sqrt(d)/2*a);

    }
    printf("roots are");
    printf("%f\n",x);
    printf("%f",y);
}
