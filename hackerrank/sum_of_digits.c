// Given a five digit integer, print the sum of its digits.

#include<stdio.h>

// main function
int main(){

    int num,sum;
    printf("Please Enter a five digit number: ");
    scanf("%d",&num);
    while(num>0){
        sum += num%10;
        num = num/10;
    }
    printf("sum: %d",sum);
    return 0;
}