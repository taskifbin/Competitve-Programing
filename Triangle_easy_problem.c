#include <stdio.h>
int main()
{
    long long int a, b, c;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if ((a + b <= c) || (b + c <= a) || (a + c <= b) || (a <= 0 || b <= 0 || c <= 0))
            printf("Case %d: Invalid\n", i + 1);

        else if ((a == b) && (b == c))
            printf("Case %d: Equilateral\n", i + 1);
        else if ((a == b) || (b == c) || (c == a))
            printf("Case %d: Isosceles\n", i + 1);
        else
            printf("Case %d: Scalene\n", i + 1);
    }

    return 0;
}

/*A triangle is a geometric shape with three positive sides. However, any given three sides won’t neces-
sarily form a triangle. The three sides must form a closed region. Triangles are categorized depending
on the values of the sides of a valid triangle. In this problem you are required to determine the type of
a triangle.
Input
The first line of input will contain a positive integer T < 20, where T denotes the number of test cases.
Each of the next T lines will contain three 32 bit signed integer.
Output
For each case of input there will be one line of output. It will be formatted as:
Case x: triangle type.
Where x denotes the case number being processed and triangle type is the type of the triangle.
triangle type will be one of the following, depending on the values of the three sides:
• Invalid - The three sides can not form a triangle
• Equilateral - All three sides of valid triangle are equal
• Isosceles - Exactly two of the sides of a valid triangle are equal.
• Scalene - No pair of sides are equal in a valid triangle.
Sample Input
4
1 2 5
1 1 1
4 4 2
3 4 5
Sample Output
Case 1: Invalid
Case 2: Equilateral
Case 3: Isosceles
Case 4: Scalene*/
