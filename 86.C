#include<stdio.h>
void main()
{
char a[100];
int i,j=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==a[i+1])
{
j=1;
}
}
if(j==1)
printf("YES");
else
printf("NO");
}

