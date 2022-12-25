#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the coordinates");
    scanf("%d%d",&x,&y);
    if (x>0&&y>0)
    {
        printf("first quadrant");
    }
    else if(x<0&&y>0)
    {

        printf("second quad");
    }
    else if(x<0&&y<0)
    {
        printf("third quad");
    }
    else if(x>0&&y<0)
    {
        printf("fourth quad");
    }
    else
        printf("wrong input");
}
