#include <stdio.h>
int findIdx(char *str, char *arr);
int main()
{
    char str[100];
    char arr[100];
    int i;

    scanf("%s", str);
    scanf("%s", arr);

    printf("%d", findIdx(str, arr));
    if (arr[i] == '\0')
    {
        printf("%d", findIdx(str, arr));
    }
    return -1;
}

int findIdx(char *str, char *arr)
{
    int i;

    while (str[i])
    {
        if (str[i] != arr[i])
        {
            return -1;
        }
        i++;
    }
    return i;
}