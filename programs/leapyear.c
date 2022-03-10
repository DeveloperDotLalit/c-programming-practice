// C Program to identify a Leap Year

#include <stdio.h>
// main function
int main(){

    // taking input from the user
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year is divisible by 4 and not divisible by 100
    // or divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;

}
