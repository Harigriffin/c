#include<stdio.h>
void main()
{
int x,y;
scanf("%d%d",&x,&y);
y=(x+y)-(x=y);
printf("%d\t%d",x,y);
}
