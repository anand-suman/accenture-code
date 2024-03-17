#include <stdio.h>
#include <limits.h>
void Toget_sum2nd(int arr[], int n)
{
    int lrg = INT_MIN;
    int sclrg;
    int lrgodd = INT_MIN;
    int sclrgodd;
    // int sml = INT_MAX;
    // int scsml;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {

            if (arr[i] > lrg)
            {

                sclrg = lrg;
                lrg = arr[i];
            }
            if (arr[i] < lrg && arr[i] > sclrg)
            {
                sclrg = arr[i];
            }
        }
        if (i % 2 != 0)
        {
            if (arr[i] > lrgodd)
            {
                sclrgodd = lrgodd;
                lrgodd = arr[i];
            }
            if (arr[i] < lrgodd && arr[i] > sclrgodd)
            {
                sclrgodd = arr[i];
            }
            // if (arr[i] < sml)
            // {
            //     scsml = sml;
            //     sml = arr[i];
            // }
            // if (scsml > sml && arr[i] < scsml)
            // {
            //     scsml = arr[i];
            // }
        }
    }
    printf("\nThe sum is %d ", sclrg + sclrgodd);
}
int main()
{
    int arr[] = {2, 8, 6, 6, 10, 11, 4, 1, 3, 7, 8};
    int n = 11;
    Toget_sum2nd(arr, n);
    return 0;
}