// Print numbers 1 to 5 sequentially.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
// Description : Displays the nukmbers 1 to 5 sequentially.
// Input : NA
// Output : Dispays string "Jay Ganesh..."
// Author : Geet Harshal Pradhan
// Date created : 26/04/23
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

///////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", iValue);

    Display(iValue);

    return 0;
}