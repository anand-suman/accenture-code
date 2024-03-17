#include <stdio.h>
#include <math.h>

// void ToShow(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
//     printf("\n");
// }

void bubble_sortz(int *arr, int n)
{
    int swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        swap = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
                swap = 0;
            }
        }
        if (swap)
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {2, 8, 6, 6, 10, 11, 4, 1, 3, 7, 8};
    int even[20], odd[20];
    int oddln = 0, evenln = 0;
    int n = 11;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            even[evenln++] = arr[i];
        }
        else
            odd[oddln++] = arr[i];
    }
    // printf("Befor the sorting even\n");
    // ToShow(even, evenln);
    // printf("\n\nBefor the sorting odd\n");
    // ToShow(odd, oddln);
    bubble_sortz(even, evenln);
    bubble_sortz(odd, oddln);
    // printf("\nAfter the sorting even\n");
    // ToShow(even, evenln);
    // printf("\nAfter the sorting odd\n");
    // ToShow(odd, oddln);
    printf("\n sum= %d ", even[evenln - 2] + odd[oddln - 2]);

    return 0;
}
