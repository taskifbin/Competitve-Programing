#include <stdio.h>
int main()
{
    long long int n, k;
    unsigned long int sum, but;

    while (scanf("%lld %lld", &n, &k) == 2)
    {

        sum = but = n;
        while (but >= k)
        {
            sum += but / k;
            but = but / k + but % k;
        }

        printf("%llu\n", sum);
    }

    return 0;
}



/*Peter has n cigarettes. He smokes them one by one keeping all the butts. Out of k > 1 butts he can
roll a new cigarette.
How many cigarettes can Peter have?
Input
Input is a sequence of lines. Each line contains two integer numbers giving the values of n and k. The
input is terminated by end of file.
Output
For each line of input, output one integer number on a separate line giving the maximum number of
cigarettes that Peter can have.
Sample Input
4 3
10 3
100 5
Sample Output
5
14
124*/
