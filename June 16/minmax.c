#include <stdio.h>

int minimum(int n, int arr[n])
{
    int min = arr[0], i;
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int maximum(int n, int arr[n])
{
    int max = arr[0], i;
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
    int m = minimum(n, arr);
    int max = maximum(n, arr);
    printf("Minimum value in array %d \n:", m);
    printf("Maximum value in array %d: \n", max);
    return 0;
}