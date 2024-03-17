#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the value of n1,n2 and n3\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if ((n1 >= n2) && (n1 >= n3))
    {
        printf("\n %d is grater", n1);
        // return 0;
    }
    else if ((n2 >= n1) && (n2 >= n3))
    {
        printf("\n %d is grater", n2);
        // return 0;
    }
    else
        printf("\n %d is grater", n3);
    return 0;
}