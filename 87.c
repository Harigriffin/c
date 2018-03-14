#include<stdio.h>
void main()
{
int a,b,i;
scanf("%d%d",&a,&b);
for(i=2;(i<=a)&&(i<=b);i++)
{
if((a%i==0)&&(b%i==0))
{
printf("%d\t",i);
}
}
}
