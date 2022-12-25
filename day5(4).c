#include<stdio.h>
void main()
{
    int a[10],c[10],n,i,r,s,k;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number from which u want to check");
    scanf("%d",&k);
    while(a[i]<k)
    {
        r=a[i]%10;
        s=a[i]/10;
        if(r>s)
        {
            r-s;
            if((r-s)==1)
            {
                a[i]=c[10];
            }
        }
        else
        {
            s-r;
            if((s-r)==1)
            {
                a[i]=c[10];
            }
        }
    }
    printf("%d",c[10]);
}
