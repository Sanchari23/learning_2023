#include <stdio.h>

void bubblesort(int n, int arr[])
{
    int i, j, temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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
    printf("\n");
    bubblesort(n, arr);
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}