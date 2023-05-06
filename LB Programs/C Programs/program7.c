// Write a program which checks whether a number is divisible by 3 and 5.

#include<stdio.h>       //For printf and scanf
#include<stdbool.h>     //For boolean data type

///////////////////////////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Input : Integer
// Output : Boolean
// Description : Checks whether input is divisible by 3 and 5
// Author : Geet Harshal Pradhan
// Date : 25/4/2023
//
////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
//Entry point function
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                     //Variable to accept value
    bool bRet = false;                  //Variable to accept return value

    printf("Please enter a number to check whether it is divisible by 3 AND 5 : \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);        //Function call

    if(bRet == true)
    {
        printf("%d is completely divisible by 3 AND 5.\n", iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 AND 5.\n", iValue);
    }

    return 0;
}