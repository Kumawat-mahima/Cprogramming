#include <stdio.h>
int main()
{
    int a;
    printf(" value of a is");
    scanf("%d",&a);
    if((a%3==0) || (a%7==0))
    {
        printf("number is divisible by 3 or 7");
    }
    else 
    {
        printf("number is not divisible by 3 or 7");
    }
    return 0;
}