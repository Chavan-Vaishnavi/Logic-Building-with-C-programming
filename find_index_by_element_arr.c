#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = 0; i < 5; i++) {
        if (a[i] == value) {
            printf("Index = %d", i);
            return 0;
        }
    }
    printf("Value not found");
}