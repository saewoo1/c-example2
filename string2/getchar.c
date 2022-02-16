#include <stdio.h>

int main()
{
    int num;
    char c;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    getchar(); //함수의 역할은 'stdin 에서 한 문자를 읽어와서 그 값을 리턴한다' 입니다.
               //물론 한 문자를 읽어오면 읽어온 문자는 stdin 에서 사라지게 되지요.
               //따라서 위 함수를 호출 함으로써 \n 을 stdin 에서 읽어와 지워버릴 수 있는 것

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);

    return 0;
}