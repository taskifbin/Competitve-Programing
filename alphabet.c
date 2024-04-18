#include <stdio.h>
int main()
{
    char fed;
  
    scanf("%c", &fed);

    if ((fed >= 'a') && (fed <= 'z'))
        printf("a\n");
    if ((fed >= 'A') && (fed <= 'Z'))
        printf("A\n");

    return 0;
}

/*
    Problem Statement

    An uppercase or lowercase English letter αα will be given as input. If αα is uppercase, print A; if it is lowercase, print a.
    Constraints

        αα is an uppercase (A - Z) or lowercase (a - z) English letter.

    Input

    Input is given from Standard Input in the following format:

    αα

    Output

    If αα is uppercase, print A; if it is lowercase, print a.
    Sample 1
    Inputcopy 	Outputcopy

    B

    	

    A

    B is uppercase, so we should print A.
    Sample 2
    Inputcopy 	Outputcopy

    a

    	

    a

    a is lowercase, so we should print a.

*/
