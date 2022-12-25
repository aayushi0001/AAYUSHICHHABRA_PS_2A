#include<stdio.h>
void main()
{
    int i,j,count=0;
    char str[10],r[10];
    printf("enter a string");
    gets(str);
    while(str[count]!='\0')
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
        r[i]=str[j];
        j--;

    }
    printf("reversed string is %s\n",r);
    for(i=0;i<count;i++)
    {
        if(r[i]==str[i])
    {
        printf("it is palindrome");
    }

    else
    {
        printf("not a palindrome");
    }
    }


}
