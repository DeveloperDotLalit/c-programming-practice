// write a program to find sum of digits using recursion.

// importing library
#include<stdio.h>

// sum of digits using recursion
int sum_of_digits(int number){
    // taking the digit out from the number
    int digit;
    digit = number % 10;
    // if the number becomes zero then using this if condition we terminate the
    // recursion and will return 0 
    if(number == 0) return 0;
    // removing the last digit
    number = number/10;
    // adding the last digit and same time calling the recursion and returning 
    // the sum
    return digit + sum_of_digits(number);
}

// main function 
int main(){

    // declaring two variables for the number itself and it's digit sum
    int take_number=0,sum=0;
    // taking number from the user
    printf("Please Enter the number: ");
    scanf("%d",&take_number);
    sum=sum_of_digits(take_number);
    // finally printing the sum on terminal
    printf("Sum of digits of above number is : %d\n",sum);
    // exiting the main program
    return 0;
}
