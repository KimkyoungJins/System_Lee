#include <stdio.h>

int main(int arg, char **argv){

    int arr[3] = {10, 20, 30};
    int *ptr;
    int i;

    ptr = &arr[1]; // pointing 20
    i = *ptr++;

    printf("%d %d", i, *ptr);

    return 0;
}