#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the value of n1 and n2\n");
    scanf("%d%d", &n1, &n2);
    if (n1 == n2)
    {
        printf("Equal");
        return 0;
    }
    (n1 > n2) ? printf("\n %d is greater ", n1) : printf("\n %d is greater ", n2);
    if (n1 == n2)
        printf("Equal");
    return 0;
}