#include <stdio.h>
int main()
{
    long long int num, ter, ten, rem;
    int i;

    for (i = 0; i < 101; i++)
    {
        ter = 0;
        ten = 1;
        scanf("%lld", &num);
        if (num < 0)
        {
            break;
        }
        else
            while (num != 0)
            {
                rem = num % 3;
                ter = ter + rem * ten;
                num /= 3;
                ten *= 10;
            }

        printf("%lld\n", ter);
    }

    return 0;
}

/*
You will be given a decimal number. You will have to convert it to its ternary (Base 3) equivalent.
Input
The input file contains at most 100 lines of inputs. Each line contains a non-negative decimal integer
N (N < 1000000001). Input is terminated by a line containing a negative value. This line should not
be processed.
Output
For each line of input produce one line of output. This line contains the ternary equivalent of decimal
value N .
Sample Input
10
100
1000
-1
Sample Output
101
10201
1101001
*/
