#include <stdio.h>
int main()
{
    int a;
    printf("entre a");
    scanf("%d",&a);
    if ((a%3==0) && (a%2==0))
    {
         printf("number is divisiable by both 2 and 3");
    }
    else 
{
    printf("not divisible by both 2 and 3");
}
return 0;

}