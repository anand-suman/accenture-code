#include <stdio.h>

int decimal_to_binary(int num)
{
    int temp, rem, place = 1;
    while (num != 0)
    {

        rem = num % 2;
        num = num / 2;
        // printf("\na_temp= %d", temp);
        temp = temp + (rem * place);
        // printf("\nb_temp= %d", temp);
        place = place * 10;
        // printf("\nplace = %d", place);
    }
    return temp;
}
int main()
{
    int num;
    num = 10;
    printf("\nBinary is = %d", decimal_to_binary(num));
    return 0;
}