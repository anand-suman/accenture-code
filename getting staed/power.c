#include <stdio.h>
#include <math.h>

double power(double base, double exp)
{
    double result = 1.0;
    if (exp > 0.0)
    {
        while (exp > 0.0)
        {
            result = result * base;
            exp--;
        }
        return result;
    }
    if (exp < 0.0)
    {
        while (exp < 0.0)
        {
            result = result / base;
            exp++;
        }
        return result;
    }
    return 1;
}

int main()
{
    int base = 2.0, exp = -8.0;
    printf("The power claculated as %lf", power(base, exp));
    return 0;
}