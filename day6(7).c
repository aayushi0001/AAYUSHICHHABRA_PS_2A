#include<stdio.h>
void main()
{
    int a[10],ans=0,i,n;
    printf("enter the number of ele in array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ans^=a[i];
    }
    printf("%d",ans);
}
