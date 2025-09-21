#include <stdio.h>

int main(){
    int *p;
    int **pp;
    int var = 10;
    p = &var;
    pp = &p;

    printf("value of var %d\n", var);
    printf("Value using single pointer %d\n", *p);
    printf("Value of the double pointer %d\n", **pp);
    printf("Address of var %p\n", (void*)&var);
    printf("Address held by p (Address of var) : %p\n", (void*)p);
    printf("Address of p: %p\n", (void*)&p);
    printf("Address held by p (Address of p) : %p\n", (void*)pp);
    return 0;
}