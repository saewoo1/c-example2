#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int a;

    while (*str)
    {
        scanf("%d", &a);
        i++;
    }

    while (i)
    {
        printf("%c", str[i]);
        i--;
    }
    return 0;
}