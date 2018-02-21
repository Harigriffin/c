#include<stdio.h>
#include<math.h>
int main()
{
int a,i,x;
scanf("%d",&a);
for(i=0;pow(i,2)<=a;i++)
{
    x=pow(i,2);
}
if(x==a)
    printf("YES");
else
    printf("NO");
return 0;
}
