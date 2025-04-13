#include <stdio.h>
int main()
{
    int a,b,c;
    printf("entre a");
    scanf("%d",&a);
    printf("entre b");
    scanf("%d",&b);
    printf("entre c");
    scanf("%d",&c);
    if((a>=b) && (a>=c))
    {
        printf("gratest number is %d",a);
    }
    else if ((b>=a) && (b>=c))
    {
        printf(" gratest number is %d ",b);
    }
    else if ((c>=a) && (c>=b))
    {
        printf("greates no.is %d",c);
    }
    return 0;
}