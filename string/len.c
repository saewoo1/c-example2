#include <stdio.h>

int str_length(char *str); 
int main()
{
    char str[] = {"What is your name?"};

    printf("이 문자열의 길이: %d \n", str_length(str)); //char형 배열 str을 받았다.

    return 0;
}

int str_length(char *str) //char형 배열을 받을 수 있다.
{
    int i = 0;
    while (str[i])
    {
        i++;
    }

    return i;
}