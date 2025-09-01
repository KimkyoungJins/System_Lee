#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

static int append_file(void){

	int fd;
	fd = open("datafile",O_WRONLY,| O_APPEND);
	if(fd == -1){ 
		printf("open() error happen\n");
		return -1;
	}
	
	dprintf(fd, "hello again file\n"); 
	close(fd);
	return 0;


}

static int truc_file(void){

	int fd;
	fd = open("datafile",O_WRONLY, O_CREAT | O_TRUNC, 0600);
	if(fd == -1){
		printf("open() error happen\n");
		return -1;
	}
	
	dprintf(fd, "bye file\n"); 
	close(fd);
	return 0;


}


static int write_file(void){

	int fd;
	fd = open("datafile", O_WRONLY | O_CREAT, 0600);
	if(fd == -1){
		printf("truc file error\n");
		return -1;
	}
	
	dprintf(fd, "hello world!!\n");
	close(fd);
	return 0;


}


int main(){
	write_file();
	truc_file();
	append_file();
	return 0;
}
