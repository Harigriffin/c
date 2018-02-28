#include<stdio.h>
#include<string.h>
void main()
{
char a[100],x=0,y=0,i;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
x++;
}
if(a[i]>='a'&&a[i]<='z')
{
y++;
}
}
if(x!=0&&y!=0)
printf("YES");
else
printf("NO");
}
