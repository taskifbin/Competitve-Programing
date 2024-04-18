#include <stdio.h>
int main()
{
    long long int n, j, i, t, num, d, las;
    long long int ze, on, tw, th, fo, fi, si, se, ei, ni;
    scanf("%lld", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        ze = on = tw = th = fo = fi = si = se = ei = ni = 0;
        for (j = 1; j <= n; j++)
        {
            d = j;
            while (d != 0)
            {
                las = d % 10;
                if (las == 0)
                    ze++;
                else if (las == 1)
                    on++;
                else if (las == 2)
                    tw++;
                else if (las == 3)
                    th++;
                else if (las == 4)
                    fo++;
                else if (las == 5)
                    fi++;
                else if (las == 6)
                    si++;
                else if (las == 7)
                    se++;
                else if (las == 8)
                    ei++;
                else if (las == 9)
                    ni++;
                d /= 10;
            }
                }
        printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n", ze, on, tw, th, fo, fi, si, se, ei, ni);
    }

    return 0;
}

/*
Trung is bored with his mathematics homeworks. He takes a piece of chalk and starts writing a sequence
of consecutive integers starting with 1 to N (1 < N < 10000). After that, he counts the number of
times each digit (0 to 9) appears in the sequence. For example, with N = 13, the sequence is:
12345678910111213
In this sequence, 0 appears once, 1 appears 6 times, 2 appears 2 times, 3 appears 3 times, and each
digit from 4 to 9 appears once. After playing for a while, Trung gets bored again. He now wants to
write a program to do this for him. Your task is to help him with writing this program.
Input
The input file consists of several data sets. The first line of the input file contains the number of data
sets which is a positive integer and is not bigger than 20. The following lines describe the data sets.
For each test case, there is one single line containing the number N .
Output
For each test case, write sequentially in one line the number of digit 0, 1, . . . 9 separated by a space.
Sample Input
2
3
13
Sample Output
0 1 1 1 0 0 0 0 0 0
1 6 2 2 1 1 1 1 1 1*/
