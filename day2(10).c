#include<stdio.h>
void main()
{
    int i,j,k=1,m,n;
    for(i=0;i<=n;i++)
    {
        if(i<(n+1)/2)
        {
            for(j=1;j<=i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=n-2*i;j++)
            {
                printf("*");
            }
        }
        else if(i>=(n+1)/2)
        {
            m=n-i;
            for(j=m;j>1;j--)
            {
                printf(" ");
            }
            for(j=1;j<2*k+1;j++)
            {
                printf("*");


            }


    }
}

}

