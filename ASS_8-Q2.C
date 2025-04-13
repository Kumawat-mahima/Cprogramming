#include <stdio.h>
int main()
{
    int hindi,english,maths,science,social;
    printf("marks in hindi");
    scanf("%d",&hindi);
    printf("marls of hindi");
    scanf("%d",&english);
    printf("marks in maths ");
    scanf("%d",&maths);
    printf("marks in science");
    scanf("%d",&science);
    printf("marks in social");
    scanf("%d",&social);
    int sum=hindi+english+maths+science+social;
    printf("total marks %d",sum);
    if(sum>=33)
    {
        printf("pass");
    }
    else
    {
           printf("fail");
    }
    return 0;
}