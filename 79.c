#include<stdio.h>
void main()
{
int a,b,c,i,x=0;
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<(a+b);i++)
{
if(c==pow(i,2))
x++;
}
if(x>0)
printf("YES");
else
printf("NO");
}
