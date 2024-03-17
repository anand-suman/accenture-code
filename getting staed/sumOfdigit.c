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
    int num = 54578;
    printf("The sum is %d", getsum(num));
    return 0;
}