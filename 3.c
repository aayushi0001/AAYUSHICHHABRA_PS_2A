#include<stdio.h>
void main()
{
    char h;
    printf("enter a char");
    scanf("%c",&h);
    if(h=='a'||h=='A'||h=='e'||h=='E'||h=='i'||h=='I'||h=='o'||h=='O'||h=='u'||h=='U')
    {
        printf(" %c is vowel",h);
    }
    else
    {
        printf("%c is consonant",h);

    }

}
