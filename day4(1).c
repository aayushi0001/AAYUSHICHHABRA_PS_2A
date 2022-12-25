#include<stdio.h>
void main()
int fibo(int);
{
    int a,n;

    printf("enter the number of terms u want in series");
    scanf("%d",&n);
    a= fibo(n);
    printf("%d",a);
}



    int fibo(int n)
    {
        if(n==1)
        {
            return 0;
        }
        if(n==2)
        {
            return 1;
        }
        else
        {
             return (fibo(n-1)+fibo(n-2));
        }
    }

