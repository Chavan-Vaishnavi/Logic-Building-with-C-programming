#include <stdio.h>

int main() {
    int r, c;

    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
           if (c == 0 || r == 0 || r == 2 || r == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
