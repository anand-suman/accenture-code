/*
This method works on Euclidean Algorithm. It is similar to what we have seen in method 2. But, we are just following a recursive way to do it.

In Addition, we are using modulo operation to reduce the number of subtractions required and improve time complexity
*/

#include <stdio.h>
int hcf(int a, int b)
{
    return (b == 0) ? a : (hcf(b, a % b));
}
int main()
{
    int n1, n2;
    n2 = 2;
    n1 = 5;
    printf("The hcf is %d ", hcf(n1, n2));
    return 0;
}