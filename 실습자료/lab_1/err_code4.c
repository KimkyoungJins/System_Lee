#include <stdio.h>

typedef struct { 
   char *name; 
   int credit; 
   } COURSE;

typedef struct { 
   char *peson_name; 
   int id; 
   COURSE *currcourse[8]; 
   }STUDENT;

int main() {
  COURSE subjects[] = {{"Calculus",3}, {"C Lang",2}, {"English",3}, {"Chapel",0}};
  STUDENT regs[] = {{"James", 12, NULL}, {"Julie",23,NULL}, {"John",31, NULL}};

  regs[0].currcourse[0] = &subjects[0].name;
  regs[1].currcourse[0] = &subjects[1]; 

  regs[1].currcourse[1]->name = regs[0].currcourse[0]->name;  /* uninitialied pointer error */

  return 0;
}

