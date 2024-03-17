#include <stdio.h>

int getrev(int n, int rev)
{

    if (n == 0)
    {
        return rev;
    }
    int rem = n % 10;
    rev = rev * 10 + rem;

    return getrev(n / 10, rev);
}

int main()
{
    int num = 54578;
    int rev = 0;
    printf("The reverse %d", getrev(num, rev));
    return 0;
}