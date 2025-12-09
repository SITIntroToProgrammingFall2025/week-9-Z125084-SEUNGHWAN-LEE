#include <stdio.h>
#include <math.h>

const int BASIC_R[] = {0, 255, 0, 0, 255};
const int BASIC_G[] = {0, 0, 255, 0, 255};
const int BASIC_B[] = {0, 0, 0, 255, 255};
const char *COLOR_NAMES[] = {"Black", "Red", "Green", "Blue", "White"};
const int NUM_COLORS = 5;

double calculate_distance(int r1, int g1, int b1, int r2, int g2, int b2) {
    double dr = (double)r1 - r2;
    double dg = (double)g1 - g2;
    double db = (double)b1 - b2;
    
    return sqrt(dr * dr + dg * dg + db * db);
}

int main() {
    int input_r, input_g, input_b;
    int i;

    scanf("%d", &input_r);
    scanf("%d", &input_g);
    scanf("%d", &input_b);

    double min_distance = calculate_distance(input_r, input_g, input_b, 
                                             BASIC_R[0], BASIC_G[0], BASIC_B[0]);
    int nearest_index = 0;

    for (i = 1; i < NUM_COLORS; i++) {
        double current_distance = calculate_distance(input_r, input_g, input_b, 
                                                     BASIC_R[i], BASIC_G[i], BASIC_B[i]);
        
        if (current_distance < min_distance) {
            min_distance = current_distance;
            nearest_index = i;
        }
    }

    printf("The nearest color is %s\n", COLOR_NAMES[nearest_index]);

    return 0;
}
