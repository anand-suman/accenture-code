#include <stdio.h>
void fibonacci(int n)
{
    static int a = 0, b = 1, nextterm;
    if (n > 0)
    {
        nextterm = a + b;
        a = b;
        b = nextterm;
        printf(" %d,", nextterm);
        fibonacci(n - 1);
    }
}
int main()
{
    int num = 10;
    printf("0, 1,");
    fibonacci(num - 2);
    return 0;
}
