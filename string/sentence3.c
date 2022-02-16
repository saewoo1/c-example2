#include <stdio.h>

int main()
{
    char words[30];

    printf("30자 이내의 문자열을 입력해 주세요 :");
    scanf("%s", words); // words[]의 []는 배열을 가르키고있는 pointer다. & 안쓰고 그대로 값을 전달 -> 배열 주소값

    printf("문자열: %s \n", words);

    return 0;
}