#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char *s;
    s = (char *)malloc(100 * sizeof(char));
    
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++){

        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        } else if(s[i] >= 'A' && s[i] <= 'B'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    
    puts(s);

    free(s);
    return 0;
}