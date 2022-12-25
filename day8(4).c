#include<stdio.h>
void main()
{
    int a[100],n,sum=0,r=0,lb,ub,mid,i;
    printf("enter the no of ele in array");
    scanf("%d",&n);
    lb=0;
    ub=n-1;
    mid=(ub+lb)/2;
    printf("enter the ele of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<mid;i++)
    {
        sum=sum+a[i];
    }
    for(i=mid+1;i<=ub;i++)
    {
        r=r+a[i];
    }
    if(r==sum)
    {
        printf("no is balanced");

    }
    else
    {
        printf("not balanced");
    }

}
