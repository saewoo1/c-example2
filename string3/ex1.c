#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    scanf("%s", str);
    i = strlen(str);

    while (i + 1)
    {
        printf("%c", str[i]);
        i--;
    }
    return 0;
}