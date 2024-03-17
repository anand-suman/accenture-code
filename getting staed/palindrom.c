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
    int num = 1111;
    int rev = 0;
    if(num==getrev(num, rev))
    printf("the number is palindrom");
    else
    printf("the number is not palindrom");
    return 0;
}