#include<stdio.h>
void main()
{
int i;
char a[100];
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
printf("\t");
for(i=0;a[i]!='\0';i++)
{
if(i%2!=0)
{
printf("%c",a[i]);
}
}
}
