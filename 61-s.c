#include<stdio.h>
#include<string.h>
void main()
{
int i,n;
char a[100];
gets(a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
