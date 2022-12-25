#include<stdio.h>
int rev(char str[]);
void main()
{
    char str[100];
    int r;
    printf("enter a string");
    gets(str);
    r=rev(str);
    printf("rev of string is %s",r);
    return(0);

}
int rev(char str[])
{
    int count=0,i,j;
    char s[100];
    while(str[count]!=' ')
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
        s[i]=str[j];
        j--;
    }
    return(s);
}
