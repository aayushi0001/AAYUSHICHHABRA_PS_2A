#include<stdio.h>
void main()
{
    int i ;
    char s[100],g[100];
    printf("enter a string ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("string in upper case is :%s\n",s);
    printf("enter a string");
    gets(g);

        for(i=0;s[i]!='\0';i++)
    {
        if(g[i]>='A'&&g[i]<='Z')
        {
            g[i]=g[i]+32;
        }
    }
    printf("string in lower case is: %s",g);
}
