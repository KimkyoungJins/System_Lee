#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {

    char name[20];
    int age;
};

int main(){

    // 구조체 동적 메모리할당
    struct student *sp = (struct Student *) malloc(sizeof(struct Student));

    return 0;
}