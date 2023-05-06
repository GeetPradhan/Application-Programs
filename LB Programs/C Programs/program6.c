// Write a program which checks whether a number is even or odd.

#include<stdio.h>       //For printf and scanf
#include<stdbool.h>     //For boolean data type

///////////////////////////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Input : Integer
// Output : Boolean
// Description : Checks whether input is even or odd
// Author : Geet Harshal Pradhan
// Date : 25/4/2023
//
////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
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

    printf("Please enter a number to check whether it is even or odd : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);        //Function call

    if(bRet == true)
    {
        printf("%d is an Even Number.\n", iValue);
    }
    else
    {
        printf("%d is an Odd Number.\n", iValue);
    }

    return 0;
}