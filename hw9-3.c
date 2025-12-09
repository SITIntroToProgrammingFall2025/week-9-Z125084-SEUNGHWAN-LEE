#include <stdio.h>

int main() {
    const int MAT1_ROW = 2; 
    const int MAT1_COL = 3; 
    const int MAT2_ROW = 3; 
    const int MAT2_COL = 2; 
    
    float A[2][3]; 
    float B[3][2]; 
    float C[2][2] = {0}; 
    int i, j, k;
    float current_val;
    
    float input[12];
    for (i = 0; i < 12; i++) {
        scanf("%f", &input[i]);
    }

    A[0][0] = input[0]; A[0][1] = input[1]; A[0][2] = input[2];
    A[1][0] = input[3]; A[1][1] = input[4]; A[1][2] = input[5];

    B[0][0] = input[6]; B[0][1] = input[7];
    B[1][0] = input[8]; B[1][1] = input[9];
    B[2][0] = input[10]; B[2][1] = input[11];

    printf("The first matrix you entered is\n");
    for (i = 0; i < MAT1_ROW; i++) {
        for (j = 0; j < MAT1_COL; j++) {
            current_val = A[i][j]; 
            if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
            if (j < MAT1_COL) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (i = 0; i < MAT2_ROW; i++) {
        for (j = 0; j < MAT2_COL; j++) {
            current_val = B[i][j];
            if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
            if (j < MAT2_COL) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for (i = 0; i < MAT1_ROW; i++) {
        for (j = 0; j < MAT2_COL; j++) {
            for (k = 0; k < MAT1_COL; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < MAT1_ROW; i++) {
        for (j = 0; j < MAT2_COL; j++) { 
            current_val = C[i][j];
            
            if (current_val >= 1000.0) { 
                 printf("%.0f", current_val);
            } else if (current_val == (int)current_val) {
                 printf("%.0f", current_val);
            } else {
                 printf("%.1f", current_val);
            }

            if (j < MAT2_COL) { 
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
