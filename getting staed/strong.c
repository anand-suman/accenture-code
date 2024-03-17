/*
A Strong Number is a number whose sum of factorial digits is equal to the number itself.
Ex:- number is 145

1! + 4! + 5! = 145

So it is a strong number.
*/

#include <stdio.h>

int getfactorial(int n)
{
    // printf("\n\t inside factrorial %d ", n);
    if (n == 0)
    {
        return 1;
    }
    return n * getfactorial(n - 1);
}

int fact_sum_digit(int n)
{
    // printf("\n\t inside fact_sum_digit %d ", n);
    if (n == 0)
        return 0;
    int rem = n % 10;
    return getfactorial(rem) + fact_sum_digit(n / 10);
}

int main()
{
    int num = 40585;
    int factorial = getfactorial(num);
    // printf("\n %d ", factorial);
    // int sum = fact_sum_digit(num);
    // printf("\n %d ", sum);
    if (num == fact_sum_digit(num))
    {
        printf("Strong number");
    }
    else
        printf(" NOT Strong number");

    return 0;
}
