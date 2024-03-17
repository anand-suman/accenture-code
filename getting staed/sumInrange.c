#include <stdio.h>
int main()
{
    int n, sum = 0, m;
    printf("Enter the range\n");
    scanf("%d%d", &n, &m);
    // tc=o(n)
    //  for (int i = n; i <= m; i++)
    //  {
    //      sum = sum + i;
    //  }

    // tc=O(n)
    sum = (m * (m + 1) / 2) - (n * (n + 1) / 2) + n;
    printf("\nsum is %d ", sum);

    return 0;
}