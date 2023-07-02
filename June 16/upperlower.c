#include <stdio.h>
#include <ctype.h>

void togglestring(char string[])
{
    int i;
    while (string[i] != '\0')
    {
        if (islower(string[i]))
        {
            string[i] = toupper(string[i]);
        }
        else if (isupper(string[i]))
        {
            string[i] = tolower(string[i]);
        }
        i++;
    }
}

int main()
{
    /*    int n,i;
        scanf("%d", &n);*/
    char str[100];
    scanf("%s", str);
    togglestring(str);
    printf("toggle string is : %s \n", str);
}