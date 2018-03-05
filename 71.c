#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
gets(a);
strrev(b,a);
if(a==b)
printf("YES");
else
printf("NO");
}
