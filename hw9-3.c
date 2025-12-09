#include <stdio.h>

int main() {
    const int MAT1_ROW = 3; 
    const int MAT1_COL = 2; 
    const int MAT2_ROW = 2; 
    const int MAT2_COL = 3; 
    
    float A[3][2]; 
    float B[2][3]; 
    float C[3][3] = {0}; 
    int i, j, k;
    float current_val;

    for (i = 0; i < MAT1_ROW; i++) {
        for (j = 0; j < MAT1_COL; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < MAT2_ROW; i++) {
        for (j = 0; j < MAT2_COL; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    
    current_val = A[0][0]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");
    
    current_val = A[0][1]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");

    current_val = A[1][0]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf("\n");

    current_val = A[1][1]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");

    current_val = A[2][0]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");

    current_val = A[2][1]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf("\n");


    printf("The second matrix you entered is\n");
    
    current_val = B[0][0]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");

    current_val = B[0][1]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf("\n");

    current_val = B[0][2]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");

    current_val = B[1][0]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf("\n");
    
    current_val = B[1][1]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf(" ");
    
    current_val = B[1][2]; 
    if (current_val == (int)current_val) printf("%.0f", current_val); else printf("%.1f", current_val);
    printf("\n");
    
    
    for (i = 0; i < MAT1_ROW; i++) {
        for (j = 0; j < MAT2_COL; j++) {
            for (k = 0; k < MAT1_COL; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < MAT1_ROW; i++) {
        for (j = 0; j < 2; j++) { 
            current_val = C[i][j];
            
            if (current_val >= 1000.0) { 
                 printf("%.0f", current_val);
            } else if (current_val == (int)current_val) {
                 printf("%.0f", current_val);
            } else {
                 printf("%.1f", current_val);
            }

            if (j < 2 - 1) { 
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
