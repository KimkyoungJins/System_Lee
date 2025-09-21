#include <stdio.h>
#include <string.h>

int main(){

    char buffer[100];

    fgets(buffer, sizeof(buffer), stdin);

    // stops when it is ends
    for(int i = 0; buffer[i] != '\0'; i++){
            if (buffer[i] >= 'a' && buffer[i] <= 'z')
                buffer[i] = buffer[i] - 'a' + 'A';
            else if (buffer[i] >= 'A' && buffer[i] <= 'Z')
                buffer[i] = buffer[i] - 'A' + 'a';
    }

    puts(buffer);
    return 0;
}