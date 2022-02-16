#include <stdio.h>

int main()
{
    int num;
    char c;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    fflush(stdin);

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);
    return 0;
}