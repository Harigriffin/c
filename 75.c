#include<stdio.h>
#include<string.h>
void main()
{
int i;
char a[100];
scanf("%s",&a);
i=strlen(a);
if(i%2==0)
{
a[i/2]='*';
a[(i/2)-1]='*';
}
else
{
a[i/2]='*';
}
printf("%s",a);
}
