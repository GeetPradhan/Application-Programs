// Display "Jay Ganesh" 5 times on screen.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
// Description : Displays the message "Jay Ganesh..." five times.
// Input : NA
// Output : Dispays string "Jay Ganesh..."
// Author : Geet Harshal Pradhan
// Date created : 26/04/23
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the frequency of Jay Ganesh statement : \n");
    scanf("%d", &iValue);
    
    Display(iValue);

    return 0;
}