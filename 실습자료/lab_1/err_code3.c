#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int id;
} STUDENT;

int main()
{
   STUDENT s1, s2;
   s1.name = "James";
   s1.id = 1;

   s2 = s1;

   printf("%s %d\n", s1.name, s1.id);
   printf("%s %d\n", s2.name, s2.id);

   return 0;
}

