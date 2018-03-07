#include<stdio.h>
void main()
{
int a,b,c,i,x=0;
scanf("%d",&a);
scanf("%d%d",&b,&c);
for(i=b;i<=c;i++)
{
if(a==i)
x++;
}
if(x!=0)
printf("YES");
else
printf("NO");
}
