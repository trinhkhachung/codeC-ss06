#include <stdio.h>

int main() {
    int number;

    printf("moi nhap 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("S? %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            printf("so le l� %d\n", number); // Th�m \n d? xu?ng d�ng
        } else {
            printf("so chan l� %d\n", number); // Th�m \n d? xu?ng d�ng
        }
    }

    return 0;
}

