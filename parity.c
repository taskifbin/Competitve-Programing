#include <stdio.h>
int main()
{
    long long int num, i, od;
    int t;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        od = 0;
        scanf("%lld", &num);
        while (num != 0)
        {
            if (num % 2 == 1)
                od++;
            num /= 2;
        }
        if (od % 2 != 0)
            printf("Case %lld: odd\n", i + 1);
        else
            printf("Case %lld: even\n", i + 1);
    }

    return 0;
}

/*
Given an integer n, first we represent in binary. Then we count the number of ones. We say n has odd parity if the number of one's is odd. Otherwise we say n has even parity.

For example, 21 = (10101)2 has odd parity since the number of one's is 3. 6 = (110)2 has even parity.

Now you are given n, we have to say whether n has even or odd parity.
Input

Input starts with an integer T (≤ 1000), denoting the number of test cases.

Each case contains an integer n (1 ≤ n < 231).
Output

For each case, print the case number and odd if n has odd parity, otherwise print even.
Sample
Inputcopy 	Outputcopy

2
21
6

	

Case 1: odd
Case 2: eve
*/
