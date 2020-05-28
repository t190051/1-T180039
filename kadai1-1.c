#include <stdio.h>

int f(int x) { return 0; }

int main() {
    int x, y;

    for(x = -8; x < 9 ; x++) {
        for(y = 0; y < x*x; y++) {
            printf("*");
        }
        printf("\n");
    }
}
