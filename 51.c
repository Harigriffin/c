#include<stdio.h>
int main()
{
int a,i,j,b[100];;
scanf("%d",&a);
for(i=0;a>10;i++)
{
b[i]=a%10;
a=a/10;
}
printf("%d\t",a);
for(j=1;j<=i;j++)
{
printf("%d\t",b[i-j]);    
}
return 0;
}
