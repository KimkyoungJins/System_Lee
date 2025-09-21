#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int id;
} STUDENT;

STUDENT *get_person(char *name, int id){
   STUDENT s;

   s.name = name;
   s.id = id;

   return &s;
}

int main()
{
   STUDENT *s1;

   s1 = get_person("James",1);

   printf("%s %d\n", s1->name, s1->id);

  /*
   STUDENT s2;
   s2 = (*s1);
   printf("%s %d\n", s2.name, s2.id);
  */

   return 0;
}

