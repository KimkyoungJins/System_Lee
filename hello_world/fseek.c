

#include <stdio.h>
#include <string.h>




int create_file(void){
	FILE *fp;

	if(!(fp = fopen("data_file", "w"))){
	 	printf("fopen faied\n");
		return -1;
	}
	
	printf("after fpen() position is  %ld\n", ftell(fp));
        fputs("hello world!! \n", fp);
        fputs("hello world!! \n", fp);	
        fputs("hello world!! \n", fp);  
        fputs("hello world!!! \n", fp);  

	printf("before close position is %ld \n", ftell(fp));

	fclose(fp);

	return 0;

	// 
}


int read_file(void){
        printf("\n");
	printf("from here is reading file \n");

        FILE *fp;

	char buffer[1024];

        if(!(fp = fopen("data_file", "r"))){
                printf("fopen faied\n");
                return -1;
        }

        printf("after fpen() position is  %ld\n", ftell(fp));

	memset(buffer, 0, sizeof(buffer));

    	if(NULL == (fgets(buffer, sizeof(buffer), fp))){	
		perror("fgets error! \n");
		return -1;
	}

	printf("%s \n", buffer);
        printf("before close position is %ld \n", ftell(fp));

	fseek(fp, 0, SEEK_END);
        printf("after fseek is %ld \n", ftell(fp));

        fclose(fp);

	

        return 0;
}
	



int main(){
	create_file();
	printf("-----------------------\n");
	read_file();
	return 0;
	}
