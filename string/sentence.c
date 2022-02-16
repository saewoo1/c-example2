#include <stdio.h>

int main()
{
    char word[30] = {"long sentence"};
    char *str = word; //pointer str이 배열 word를 가르키고 있다.

    printf("%s \n", str); // 가리키고 있는 대상은 word.

    return 0;
}