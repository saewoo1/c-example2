#include <stdio.h>
int copy_str(char *src, char *dest);
int main()
{
    char str1[] = "hello";
    char str2[] = "hi";

    printf("복사 이전 : %s \n", str1);

    copy_str(str1, str2);

    printf("복사 이후 : %s \n", str1);
}
int copy_str(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}