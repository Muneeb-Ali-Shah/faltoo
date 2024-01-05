#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    // Input day
    printf("Enter the day in format dd: ");
    scanf("%d", &dd);

    // Input month
    printf("Enter the month in format mm: ");
    scanf("%d", &mm);

    // Input year
    printf("Enter the year in format yyyy: ");
    scanf("%d", &yyyy);

    // Check conditions for a valid date
    if (yyyy > 0 && yyyy <= 9999 &&
        mm > 0 && mm <= 12 &&
        dd > 0 && dd <= 31) {
        
        if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) && dd <= 31) {
            printf("The date is valid.\n");
        } else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd <= 30) {
            printf("The date is valid.\n");
        } else if ((yyyy % 4 == 0) && mm == 2 && dd <= 29) {
            printf("The date is valid.\n");
        } else if ((yyyy % 4 != 0) && mm == 2 && dd <= 28) {
            printf("The date is valid.\n");
        } else {
            printf("Invalid date.\n");
        }

    } else {
        printf("Invalid date.\n");
    }

    return 0;
} 



