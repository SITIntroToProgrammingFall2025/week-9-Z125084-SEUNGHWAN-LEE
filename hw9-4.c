#include <stdio.h>

char to_hex_char(int value) {
    if (value < 10) {
        return value + '0';
    } else {
        return value - 10 + 'A';
    }
}

void rgb_to_hex_pair(int decimal, char *hex_pair) {
    int first_digit, second_digit;

    first_digit = decimal / 16;
    second_digit = decimal % 16; 
    
    hex_pair[0] = to_hex_char(first_digit);
    hex_pair[1] = to_hex_char(second_digit);
}

int main() {
    int r, g, b;
    char hex_r[3], hex_g[3], hex_b[3];

    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    rgb_to_hex_pair(r, hex_r);
    rgb_to_hex_pair(g, hex_g);
    rgb_to_hex_pair(b, hex_b);

    printf("The hex code is #%c%c%c%c%c%c\n", 
           hex_r[0], hex_r[1], hex_g[0], hex_g[1], hex_b[0], hex_b[1]);

    return 0;
}
