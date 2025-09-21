#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;     // p는 변수 x의 주소를 가리킴
    int **pp = &p;   // pp는 포인터 p의 주소를 가리킴

    printf("x의 값: %d\n", x);
    printf("p가 가리키는 값: %d\n", *p);
    printf("pp가 가리키는 값: %d\n", **pp);

    // 값을 변경해 봅시다.
    **pp = 200;

    printf("\n값 변경 후:\n");
    printf("x의 값: %d\n", x);
    printf("p가 가리키는 값: %d\n", *p);
    printf("pp가 가리키는 값: %d\n", **pp);

    return 0;
}