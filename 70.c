#include<stdio.h>
#include<math.h>
void main()
{
int a,i;
scanf("%d",&a);
for(i=1;a!=pow(2,i);i++)
{
a=a+1;
}
printf("%d",a);
}
