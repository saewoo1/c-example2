#include <stdio.h>

int main()
{
    char str[100];
    int i;

    scanf("%s", str);
    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        printf("%c", str[i]);

        i++;
    }

    return 0;
}