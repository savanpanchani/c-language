#include <stdio.h>

int reverseNumber(int num) {
    if (num < 100 || num > 999) {
        printf("The number is not a 3-digit number.\n"); 
    }

    int hundreds = num / 100;         
    int tens = (num / 10) % 10;     
    int units = num % 10;           

    int reversed = (units * 100) + (tens * 10) + hundreds;
    return reversed;
}

int main() {
    int number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    int result = reverseNumber(number);

        printf("The reversed number is: %d\n", result);

}