/*automorphic number is a number whose square ends with the same digits as number itself.
5 =(5)2 = 25

6 = (6)2 = 36

25 = (25)2 = 625

76=(76)2 = 5776

376 = (376)2 = 141376

890625 = (890625)2 = 793212890625
*/


#include <stdio.h>

int chack(int num)
{
    int sqar = num * num;
    printf(" %d \n", sqar);
    while (num != 0)
    {
        if (num % 10 != sqar % 10)
        {
            return 0;
        }
        num = num / 10;
        sqar = sqar / 10;
    }
    return 1;
}

int main()
{
    int num = 376;
    if (chack(num))
    {
        printf("\nAutomorphic number");
    }
    else
        printf(" \nNOT Automorphic number");

    return 0;
}