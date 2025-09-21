#include <stdio.h>

int main(){

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                printf("A[%d][%d][%d] = %03d", i, j, k, p[i][j][k]); 
            }
        }
    }

    int A[2][3][4] = 
    {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
    {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120} 
};



    return 0;
}