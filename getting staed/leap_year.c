#include <stdio.h>
int main()
{
    int n = 2021;

    (((n % 4 == 0) && (n % 2 != 100)) || (n % 400 == 0)) ? printf("Leap year") : printf("not leap year");

    return 0;
}