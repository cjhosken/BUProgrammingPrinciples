#include <stdio.h>

int gregorianLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            }
            return 0;
        }

        return 1;
    }

    return 0;
}

int julianLeapYear(int year) {
    if (year % 4 == 0) {
        return 1;
    } 
    return 0;
}

int isLeapYear(int year) {
    if (year < 1582) {
        return julianLeapYear(year);
    }
    return gregorianLeapYear(year);
}

int main(void) {
    int year;

    while (1) {
        scanf("%d", &year);
        fflush(stdin);

        if (year == 0) {
            return 0;
        }

        if (isLeapYear(year)) {
            printf("%d is a leap year.\n", year);
        }
        else {
            printf("%d is not a leap year\n", year);
        }
    }
}
