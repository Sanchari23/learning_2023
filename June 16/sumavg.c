#include <stdio.h>

int suma(int n, int arr[n])
{
    int s = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
    return s;
}

float avga(int n, int arr[n])
{
    int sum = suma(n, arr);
    float avg = sum / n;
    return avg;
}

int main()
{
    int n, i;
    scanf(" %d ", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("given array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sum = suma(n, arr);
    float avg = avga(n, arr);
    printf("Sum of Array is : %d \n", sum);
    printf("Average of array is : %f \n", avg);

    return 0;
}