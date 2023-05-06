#include<stdio.h>

int main()
{
    int Std = 0;
    printf("Enter standard\n");
    scanf("%d", &Std);

    switch(Std)
    {
        case 1:
        printf("Exam is at 1pm\n");
        break;

        case 2:
        printf("Exam is at 2pm\n");
        break;

        case 3:
        printf("Exam is at 3pm\n");
        break;

        case 4:
        printf("Exam is at 4pm\n");
        break;

        default:
        printf("Invalid standard\n");

    }

    return 0;
}