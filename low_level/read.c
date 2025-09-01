#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct{
	char name[20];
	int age;
} Person;


void write_data(Person *p){
	int fd;
	// data file person_info created
	// write only and if there is no, create file 
	// open() returns the integer that describe the file number
	// TRUNC means if there are some data on the file, delte and reaplace with the new data
	// 0644 means authority of file access
	fd = open("person_info", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	// error handle
	if (fd== -1){
		printf("file write error\n");
		return;
	}
	

	// write on the file as size of Person
	if (write(fd, p, sizeof(Person)) == -1){
		printf("wirte() fail\n");
		return;
	}

	// close
	close(fd);
}


int main(){
	Person p1;
	strcpy(p1.name, "Kim");
	p1.age = 20;

	read_data();
	printf("read_file successfully read \n");

return 0;
}

