/*a perfect number is a positive number that is equal to the sum of all its divisors(excluding itself) excluding itself.
Ex:- Take a number:  6
6 is a perfect number as 1 + 2 + 3 = 6.
Ex:- Take a number: 28

28 is a perfect number as 1 + 2 + 4 + 7 + 14 = 28.
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
        printf("\n sum = %d", sum);
    }
    return sum;
}

int main()
{
    int num = 6;

    if (num == facter(num))
    {
        printf("\nPrefect number");
    }
    else
        printf(" \nNOT Prefect number");

    return 0;
}
