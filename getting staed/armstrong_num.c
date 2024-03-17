
#include <stdio.h>
#include <math.h>

int Tofind_len(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int getArmsteong(int n, int len)
{
    if (n == 0)
    {
        return 0;
    }
    int last_digit = n % 10;
    return pow(last_digit, len) + getArmsteong(n / 10, len);
}

int main()
{
    int num = 153;
    int len = Tofind_len(num);
    if (num == getArmsteong(num, len))
        printf("Armstong...");
    else
        printf(" Not Armstong...");
    return 0;
}