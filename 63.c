#include<stdio.h>
#include<string.h>
void main()
{
int x=1,i;
char a[100];
scanf("%s",&a);
for(i=0;i<100;i++)
{
if(a[i]==' ')
x++;
}
printf("%d",x);
}
