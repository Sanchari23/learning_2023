#include <stdio.h>

void reversearray(int n, int arr[n])
{
    int temp = 0;
    int s = n / 2;
    for (int i = 0; i < s; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
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
    printf("\n");
    reversearray(n, arr);
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}