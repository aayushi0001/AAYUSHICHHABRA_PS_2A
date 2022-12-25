#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("enter number");
    scanf("%d",&n);


      while((n>0)||(sum>9))
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }

        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);

}




