#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	int age;
}Person;


static int  write_to_file(void){
	
	FILE *fp;
	
	Person kim = {
		.name = "kim",
		.age = 20;
	}

	Person lee  = {
                .name = "lee",
                .age = 20;
        }

	if(!(fp = fopen("persons", "w"))){
		return -1;
	}

	if(fwrite(&kim, sizeof(Person), 1, fp) != 1){
		return -1
	}

	if(fwrite(&kim, sizeof(Person), 1, fp) != 1){
		return -1;
	}


	fclose(fp);
	return 0;
}


static int read_from_file(){
	
	FILE *fp;
	
	struct person persons[2];

	if(fread(fread(persons, sizeof(struct person), 2, fp)){
			
			
	}

	fclose(fp);
	return 0; 

}

int main(){
	write_to_file();
	read_from_file();
return 0;
}
