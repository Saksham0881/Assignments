#include <stdio.h>
int main()
{
    int cp;
    printf("Enter cost Price :");
    scanf("%d", &cp);
    int sp;
    printf("Enter Sell Price :");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("It is profitable and profit is :");
    }

    else if(cp > sp)
    {
        printf("It is lossable and loss is :");
    }

    else
    {
        printf("It is Neither profitable nor Lossable and margin :");
    }
    {
        int p;
        p = sp - cp;
        printf("%d", p);
    }
    return 0;
}