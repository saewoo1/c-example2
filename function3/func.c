#include <stdio.h>

int main() {
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("pa 가 가리키는 변수의 주소값: %p \n", pa);
    
}