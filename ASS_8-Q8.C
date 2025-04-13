#include <stdio.h>
int main () 
{
int a,b,t;

printf("entre a=");
scanf("%d",&a);
printf("entre b=");
scanf("%d",&b);
t=a;
a=b;
b=t;

printf("swaping values : a = %d , b = %d ",a,b);

return 0;
}