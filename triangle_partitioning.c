#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, rat, s;
    double ade, abc, d, ad;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &rat);
        s = (a + b + c) / 2;
        abc = sqrt(s * (s - a) * (s - b) * (s - c));
        ade = (rat * (abc)) / (rat + 1);
        d = sqrt((ade / abc) * (b * b));
        ad = a * (d / b);
        printf("Case %d: %lf\n", i + 1, ad);
    }

    return 0;
}


/*
See the picture below.

Triangle Partitioning
You are given AB, AC and BC. DE is parallel to BC. You are also given the area ratio between ADE and BDEC. You have to find the value of AD.
Input

Input starts with an integer T (≤ 25), denoting the number of test cases.

Each case begins with four real numbers denoting AB, AC, BC and the ratio of ADE and BDEC (ADE / BDEC). You can safely assume that the given triangle is a valid triangle with positive area.
Output

For each case of input you have to print the case number and AD. Errors less than 10-6 will be ignored.
Sample
Inputcopy 	Outputcopy

4
100 100 100 2
10 12 14 1
7 8 9 10
8.134 9.098 7.123 5.10

	

Case 1: 81.6496580
Case 2: 7.07106781
Case 3: 6.6742381247
Case 4: 7.437454786
*/
