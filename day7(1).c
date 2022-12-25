#include<stdio.h>
int length(char str[]);
void main()
{
    char str[100];
    int l;
    printf("enter a string");
    gets(str);
    l=length(str);
    printf("lenght of string is %d",l);
}
int length(char str[])
{
    int len;
    while(str[len]!='\0')
    {
        len++;
    }
    return(len);
}
