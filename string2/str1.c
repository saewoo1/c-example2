#include <stdio.h>

int main()
{
    int num;
    char c;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);

    return 0;
}
//그렇다면 scanf 함수는 언제까지 stdin 으로 부터 데이터를 얻어올까요? 바로 ' ', '\n', '\t' 를 만날 때 까지
// %d 계열의 것들, 즉 수를 입력받는 형식은 수가 아닌 데이터가 와도 입력을 종료