#include<stdio.h>
void main()
{
    int a[100],b[100],m,n,i,j,c[10],k=0;
    printf("enter the number of elements in a");
    scanf("%d",&m);
    printf("enter the elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number of elements in b");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d",a[i]);
            }
        }
    }
    //difference of A-B

    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                k++;
            }
        }
    if(k==0)
    {
        printf("%d ",a[i]);
    }
    }
//difference of b-a

for(i=0;i<n;i++)
{
    k=0;
    for(j=0;j<m;j++)
    {
        if(b[i]==a[j])
        {
            k++;
        }

    }
if(k==0)
{
   printf("%d ",b[i]);
}
}

}
