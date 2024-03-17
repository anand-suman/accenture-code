#include <stdio.h>
#include <math.h>

int main()
{
    int n = 25;
    int isprime = 1;
    if (n <= 1)
    {
        isprime = 0;
    }
    else if (n == 2)
    {
        isprime = 1;
    }
    else if (n % 2 == 0)
    {
        isprime = 0;
    }
    // int count = 0;

    // this the code for the finding prime number simpal way
    // for (int i = 2; i*i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //         printf(" %d \n", count);
    //     }
    //  
    // }

    // (count >= 1) ? printf("%d is not prime", n) : printf("\nIs prime");

    // #######################################################################
    // for other way break statment
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isprime = 0;
    //         break;
    //     }
    // }
    // (isprime) ? printf("%d is prime", n) : printf("\nIs not prime");

    // Optimization by n/2 iterations
    // for (int i = 2; i < n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isprime = 0;
    //         break;
    //     }
    // }
    // (isprime) ? printf("%d is prime", n) : printf("\nIs not prime");

    // Method 4: Optimization by √n

    // for (int i = 2; i < sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isprime = 0;
    //         break;
    //     }
    // }
    // (isprime) ? printf("%d is prime", n) : printf("\nIs not prime");

    // Method 5: Optimization by
    // skipping even iteration

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    (isprime) ? printf("%d is prime", n) : printf("\nIs not prime");
    return 0;
}