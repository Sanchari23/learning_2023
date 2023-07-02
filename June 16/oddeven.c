#include <stdio.h>

int difference(int n, int arr[])
{
    int i, d;
    int se = 0, so = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            se += arr[i];
        }
        else
        {
            so += arr[i];
        }
    }
    d = so - se;
    if (d <= 0)
    {
        d = -d;
    }
    return d;
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
    printf("given array :");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    int diff = difference(n, arr);
    printf("difference between odd and even no is : %d", diff);

    return 0;
}