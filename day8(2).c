#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,c=0,r,p;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the position of number u want to print");
    scanf("%d",&k);
    p=pow(a,b);
    while(c<k&&p>0)
    {
        r=p%10;
    c++;
    if(c==k)
    {
                printf("%d",r);


    }


    p=p/10;

    }



}
