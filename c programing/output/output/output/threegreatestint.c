#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 1 number :");
    scanf("%d", &a);
    printf("enter 2 number :");
    scanf("%d", &b);
    printf("enter 3 number :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("the a is greatest :%d",a);
    }
    if (b > a && b > c)
    {
        printf("the b is greatest :%d",b);
    }
    else
    {
        printf("the c is greatest :%d",c);
    }
    return 0;
}