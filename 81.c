#include<stdio.h>
void main()
{
int a1,a2,b1,b2,c1,c2,a,b,c;
scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
a=a1-a2;
b=b1-b2;
c=c1-c2;
if(a<0)
a=a *-1;
if(b<0)
b=b *-1;
if(c<0)
c= c*-1;
printf("%d\n%d\n%d\n",a,b,c);
}

