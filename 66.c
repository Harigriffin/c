#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a<4)
{
printf("PRIME");
}
else
{
for(i=2;i<a;i++)
{
if(a%i==0)
{
printf("PRIME");
break;
}
