#include<stdio.h>
void main()
{
int a,b,g;
char x;
scanf("%d%s%d",&a,&x,&b);
if(x=='/')
{
g=a/b;
}
if(x=='%')
{
g=a%b;
}
printf("%d",g);
}
