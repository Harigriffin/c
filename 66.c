#include<stdio.h>
void main()
{
int a,i;
scanf("%d",&a);
if(a<4)
{
printf("YES");
}
else
{
for(i=2;i<a;i++)
{
if(a%i!=0)
{
printf("YES");
break;
}
if(a%i==0)
{
printf("NO");
break;
}
}
}
}
