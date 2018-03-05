#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
gets(a);
b=strrev(a);
if(strcmp(a,b)==0)
printf("YES");
else
printf("NO");
}
