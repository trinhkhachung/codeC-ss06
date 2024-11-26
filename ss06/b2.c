#include <stdio.h>

int main() {
    int number;

    printf("moi nhap 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("S? %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            printf("so le là %d\n", number); // Thêm \n d? xu?ng dòng
        } else {
            printf("so chan là %d\n", number); // Thêm \n d? xu?ng dòng
        }
    }

    return 0;
}

