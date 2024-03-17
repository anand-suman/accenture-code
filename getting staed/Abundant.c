/*Abundant Number in C
In this program, we need to check if a number is an Abundant number in C Programming. A number n is said to be Abundant Number to follow these condition

The sum of its proper divisors is greater than the number itself
The difference between these two values is called the abundance.
Ex:- Abundant number  12 having a proper divisor is 1, 2, 3, 4, 6

The sum of these factors is 16 it is greater than 12
So it is an Abundant number

Some other abundant numbers:

18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
*/

#include <stdio.h>
#include <math.h>

int facter(int num)
{
    static int sum = 1;
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                sum = sum + i;
            else
                sum = sum + i + num / i;
        }
        // printf("\n sum = %d", sum);
    }
    return sum;
}

int main()
{
    int num = 18;
    if (facter(num) > num)
    {
        printf("\nAbundant number");
    }
    else
        printf(" \nNOT Abundant number");

    return 0;
}