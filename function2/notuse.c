#include <stdio.h>

int main()
{
    char input;

    scanf("%c", &input);

    if (48 <= input && input <= 57)
    {
        printf("%c 는 숫자입니다.\n", input);
    }
    else
    {
        printf("%c 는 숫자가 아닙니다.\n", input);
    }

    return 0;
}