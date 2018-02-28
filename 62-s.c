#include<stdio.h>
void main()
{
int a,b[100],x=0,i;
scanf("%d",&a);
for(i=0;a>10;i++)
{
b[i]=a%10;
a=a/10;
if(b[i]!=0&&b[i]!=1)
x++;
}
if(x>0)
printf("NO");
else
printf("YES");
}
