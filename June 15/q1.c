#include <stdio.h>

void ascending(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
}

void space(int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        printf(" ");
    }
}

void descending(int n)
{
    int i;
    for (i = n; i > 0; i--)
    {
        printf("%d", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        ascending(i);
        space(2 * (n - i));
        descending(i);
        printf("\n");
    }
}