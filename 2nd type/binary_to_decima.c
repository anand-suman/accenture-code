#include <stdio.h>
#include <math.h>

int binary_to_decimal(long long num)
{
    int rem, decimal = 0;
    int i = 0;
    while (num != 0)
    {
        rem = num % 10;
        decimal += rem * pow(2, i);
        num = num / 10;
        i++;
    }
    printf("%d\n", i);
    return decimal;
}
int main()
{
    long long num;
    num = 1111;
    printf("The decimal number is %d ", binary_to_decimal(num));
    return 0;
}