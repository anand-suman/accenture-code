#include <stdio.h>
int main()
{
    int n = 5;

    (n > 0) ? printf("sum is %d ", ((n * (n + 1)) / 2)) : printf("not natural");

    return 0;
}