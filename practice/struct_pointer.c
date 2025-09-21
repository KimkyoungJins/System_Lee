#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char name[20];
    int id;
} Student;


// char *name 은 문자열의 주소를 받겠다는 의미이다. 
Student *get_person(char *name, int id){

    // 힙 메모리에 구조체의 크기 만큼 메모리를 할당한다. 
    Student *p = (Student *)malloc(sizeof(Student));

    // 할당된 메모리에 복사한다. 
    strcpy(p -> name, name);
    p -> id = id;
    
    return p;
}

int main(){
    Student *s1;

    // s1 포인터에 대한 메모리를 할당한다. 
    s1 = (Student *)malloc(sizeof(Student));
    s1 = get_person("James", 101);
    
    return 0;
}