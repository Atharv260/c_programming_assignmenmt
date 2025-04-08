#include <stdio.h>
#include <math.h>
#include "atharv.h"

// Armstrong Number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
   
}

// Code for palindrome 
int isIntegerPalindrome(int num) {
    if (num < 0) return 0;

    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
  
}

// Code to calculate sum of digits of a given number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;

    // Code to check given number is Armstrong 
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Check Palindrome
    printf("Enter an integer to check if it's a palindrome: ");
    scanf("%d", &num);

    if (isIntegerPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    // Calculate Sum of Digits
    printf("Enter an integer to calculate sum of digits: ");
    scanf("%d", &num);

    int result = sumOfDigits(num);
    printf("Sum of digits: %d\n", result);
}

    
