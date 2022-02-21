#include <stdio.h>

int main()
{
    char str[100];
    int i;

    scanf("%s", str);

    while (str[i])
    {
        i++;
    }

    while (i + 1)
    {
        printf("%c", str[i]);
        i--;
    }

    return 0;
}