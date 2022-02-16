#include <stdio.h>

int isdigit(char c);
int main()
{
    char input;

    scanf("%c", &input);

    if (isdigit(input))
    {
        printf("%c 는 숫자입니다. \n", input);
    }
    else
    {
        printf("%c 는 숫자가 아닙니다. \n", input);
    }
    return 0;
}
int isdigit(char c)
{
    if (48 <= c && c <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}