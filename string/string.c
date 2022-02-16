#include <stdio.h>

int main()
{
    char sentence_1[4] = {'P', 'S', 'I', '\0'};
    char sentence_2[4] = {'P', 'S', 'I', 0};
    char sentence_3[4] = {'P', 'S', 'I', (char)NULL};
    char sentence_4[4] = {"Psi"}; //NULL은 자동으로 추가된다.

    printf("sentence_1 : %s \n", sentence_1); // %s 은 NULL을 만날 때까지 문자를 계속 출력한다.
    printf("sentence_2 : %s \n", sentence_2);
    printf("sentence_3 : %s \n", sentence_3);
    printf("sentence_4 : %s \n", sentence_4);

    return 0;
}