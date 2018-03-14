#include<stdio.h>
void main()
{
int a,b,i,c=1;
scanf("%d%d",&a,&b);
for(i=2;(i<=a)&&(i<=b);i++)
{
if((a%i==0)||(b%i==0))
{
c=c*i;
}
}
printf("%d",c);
}
