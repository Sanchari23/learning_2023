#include <stdio.h>

int searching(int n, int arr[], int f)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == f)
        {
            return i;
        }
    }

    return -1;
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
    int find;
    scanf("%d", &find);
    int index = searching(n, arr, find);
    printf("element fount in %d index\n", index);

    return 0;
}
