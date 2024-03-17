/*In mathematics, a Harshad number is a number that is divisible by the sum of its digits.
Ex- Number is 21

it is divisible by its own sum (1+2) of its digit(2,1)

So it is Harshad's Number

Some other Harshad's Number are 156,54,120 etc
*/

#include <stdio.h>

int getsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int last_digit = n % 10;
    return last_digit + getsum(n / 10);
}
int main()
{
    int num = 21;
    if (num % getsum(num) == 0)
    {
        printf("\nHarshad number");
    }
    else
        printf(" \nNOT Harshad number");

    return 0;
}