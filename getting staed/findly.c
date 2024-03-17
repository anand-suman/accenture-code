/*
Friendly pair(Amicable numbers) are two different numbers related in a way such that the Ratio’s sum of the proper divisors divided by number itself for each is same
Example: 6 and 28 are friendly pairs because

(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28

(1 + 2 + 3)/ 6 = (1 + 2 + 4 + 7 + 14)/ 28

1 = 1
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
    int num1 = 6;
    int num2 = 28;
    if (facter(num1) / num1 == facter(num2) / num2)
    {
        printf("\nfriendly pair");
    }
    else
        printf(" \nNOT friendly pair");

    return 0;
}