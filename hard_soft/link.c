#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


#define TARGET_FILE "hello_world"

int main(){

	if (link(TARGET_FILE, "hello_by_link") !=  0) {
		printf("link() fail\n");
	} else {
		printf("hlink has benn done successfully!\n");
	}


	if (symlink(TARGET_FILE, "hello_by_symlink") != 0){
		printf("hard link failed \n");
	} else {
		printf("slink has benn done successfully!\n");
	}

return 0;
}
