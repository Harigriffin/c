#include<stdio.h>
void main()
{
int a[10],n,i,b[10];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
a[0]=b[0];
for(i=0;i<n;i++)
{
if(a[i]!=b[i])
{
printf("%d",a[i]+1);
break;
}
b[i]++;
}
}
