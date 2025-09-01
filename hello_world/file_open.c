#include <stdio.h>
#include <string.h>


// write to file funnc
int write_to_file(void){
	

	FILE *fp;

	fp = fopen("data", "w");

	if(fp == NULL){
		perror("fopen error");
		return -1;
	}

	fputs("hello world!", fp);

	fclose(fp);

	return 0;
}


int read(void){

        FILE *fp;

	char buffer[1024];

        fp = fopen("data", "r");

        if(fp == NULL){
                perror("fopen error");
                return -1;
        }
	

	// initialize memory block
	memset(buffer, 0, sizeof(buffer));
        fgets(buffer, sizeof(buffer), fp);

        fclose(fp);


	printf("%s\n", buffer); 

        return 0;
}


int main(void){

	if(write_to_file() != 0){

		perror("write to file");
		return -1;
	}

	if(read() != 0){

		perror("error");
		return -1;
	}

	return 0;
}








