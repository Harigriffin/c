#include<stdio.h>
int main()
{
int c=0,n,i,x=1,y=1;
scanf("%d",&n);
if(n>=2)
{
printf("1\t1\t");
for(i=1;i<(n-1);i++)
{
c=x+y;
x=y;
y=c;
printf("%d\t",c);
}
}
else
printf("%d",x);
return 0;
}
