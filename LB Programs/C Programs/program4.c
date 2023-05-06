/*
    Steps to create the application:

    Step1 : Understand the problem statement
    Step2 : Write the algorithm
    Step3 : Decide the program language
    Step4 : Write the program
    Step5 : Test the wtitten program
*/



// Write a program which performs addition of two numbers.

/*
    Algorothm

    START
        Accept first number as No1
        Accept second number as No2
        Create a variable as Ans
        Perform addition of No1 and No2
        Store the addition in variable Ans
        Display the value of Ans
    STOP
*/


/////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which performs addition of two numbers.
//
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function name : Addition
//  Input :         Unsigned integer, Unsigned integer
//  Output :        Unsigned integer
//  Description:    Performs addition of two numbers
//  Author :        Geet Harshal Pradhan
//  Date :          18/04/2023 + 19/04/23
//
////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

////////////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d", &iNo1);

    printf("Enter second number : \n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is %d\n", iAns);

    return 0;
}