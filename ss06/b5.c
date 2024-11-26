#include <stdio.h>

int main() {
    int year, month, days;
    printf("nhap nam: ");
    scanf("%d", &year);
    printf("nhap thang: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("thang k hop le.\n");
        return 1; 
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
    }
    printf("thang %d nam %d c� %d ng�y.\n", month, year, days);

    return 0;
}

