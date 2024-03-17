#include <stdio.h>
#include <math.h>

void facter(int num)
{
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            if (num / i == i)
                printf(" %d ", i);
            else
                printf(" %d %d ", i, num / i);
        }
    }
}
int main()
{
    int num = 10;
    facter(num);
    return 0;
}