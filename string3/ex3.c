#include <stdio.h>
int compareStr(char *str, char *arr);
int main()
{
    char str[100];
    char arr[100];

    scanf("%s", str);
    scanf("%s", arr);

    if (compareStr(str, arr))
    {
        printf("같다");
    }
    else
    {
        printf("다르다");
    }
    return 0;
}

int compareStr(char *str, char *arr)
{
    while (*str)
    {
        if (*str != *arr)
        {
            return 0;
        }
        str++;
        arr++;
    }

    if (*arr == '\0')
    {
        return 1;
    }
    return 0;
}