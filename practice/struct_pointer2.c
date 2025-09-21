#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int id;
} Student;

Student *get_student(char *name, int id){

    Student s;
    strcpy(s.name, name);
    s.id = id;

    return &s;
}

int main(){

    Student *s;

    return 0;
}