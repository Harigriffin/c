#include<stdio.h>
int main()
{
int a[10],i,c;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=8;i++)
{
c=a[i]>a[i+1]?a[i]:a[i+1];
}
printf("%d",c);
return 0;
}
