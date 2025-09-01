#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>





int main(int argc, char **argv){

	struct stat statbuf; 

	// checkt the integer
//	if(argc < 2){
//		printf("stat failed!\n");
//		return -1;
//	}

	// load file info
	if(stat(argv[1], &statbuf) != 0){
		printf("stat() failed");
		return -1;
	}

	// printf all of the infomation
	printf("the file name is %s\n", argv[1]);
	printf("the num of inode %ld\n", statbuf.st_ino);
	printf("file size of the %ld \n", statbuf.st_size);
	printf("the num of links %d\n", statbuf.st_nlink);

	return 0;
}



