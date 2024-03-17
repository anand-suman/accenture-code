/*
LCM of Two Number
The LCM of Two Number num1 and num2 is the smallest positive integer that is perfectly divisible
by both num1 and num2 (without a remainder).
*/

#include <stdio.h>
int lcm(int a, int b)
{
    int i;
    int max = (a > b) ? a : b;
    for (i = max; i <= (a * b); i += max)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }

    return 0;
}
int main()
{
    int n1, n2;
    n2 = 2;
    n1 = 5;
    printf("The lcm is %d ", lcm(n1, n2));
    return 0;
}