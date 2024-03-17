#include <stdio.h>
#include <math.h>

int prime(int n)
{
    // int isprime = 1;
    if (n <= 1)
    {
        return 0;
    }


    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    a = 1;
    b = 10;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            printf("%d\t", i);
        }
    }
    return 0;
}