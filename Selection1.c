#include<stdio.h>

int main()
{
    int No = 0;
    printf("Enter a number\n");
    scanf("%d", &No);

    if((No % 2) == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}