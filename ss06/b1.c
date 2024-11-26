#include <stdio.h>

int main() {
    int number,
	sum = 0;
    printf("moi nhap 5 so nguyen");
    for (int i = 1; i <= 5; i++) {
        printf("so %d: ", i);
        scanf("%d", &number);
        if (number % 2 != 0) {
            sum += number;
        }
    }

    printf("tong so le la: %d\n", sum);
    return 0;
}

