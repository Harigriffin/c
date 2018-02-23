#include<stdio.h>
int main()
{
int a,i,c=0,b=0;
scanf("%d",&a);
for(i=0;a>10;i++)
{
b=a%10;
a=a/10;
c=c+b;
}
c=c+a;
printf("%d",c);
return 0;
}
