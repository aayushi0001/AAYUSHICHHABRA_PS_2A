#include<stdio.h>
void main()
{
    int n, a[10],i;
    printf("ennter the number of ele");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1");

        }
        else if(i%2==0)
        {
            printf("2");
                    }
        else
        {

            printf("%d",i);

        }

    }
}
