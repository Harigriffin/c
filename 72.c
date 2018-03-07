#include<stdio.h>
void main()
{
char a[100];
int i,c=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
c++;
}
}
if(c!=0)
printf("YES");
else
printf("NO");
}
