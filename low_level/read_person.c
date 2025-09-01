#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct{
	char name[20];
	int age;
} Person;



void read_file(){
	
	int fd; 	// interger type return and 
	ssize_t ret;	// signed integer type for system call return system
	char buffer[100];
	Person p;

	fd = open("person_info",  O_RDONLY);
	
	// error handling
	if(fd == -1) {
		printf("Open and read file failed");
		return -1;
	}
	
	ret = read(fd, buffer, 100);
	if (-1 == ret){
		printf("read() errorr\n");
		return -1;
	} 

	printf("reading has been successfull");
	printf("\n");
	close(fd);
}



int main(){
	read_file();
return 0;
}
