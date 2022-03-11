// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
// Function Description

// Complete the calculate_the_maximum function in the editor below.

// calculate_the_maximum has the following parameters:

// int n: the highest number to consider
// int k: the result of a comparison must be lower than this number to be considered
// Prints

// Print the maximum values for the and, or and xor comparisons, each on a separate line.

// Input Format

// The only line contains  space-separated integers, n and k.

// Sample Input 0
// 5 4

// Sample Output 0
// 2
// 3
// 3




#include <stdio.h>


//Complete the following function.
void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int i,j,maxAnd=0,maxOr=0,maxXor=0;
    // looping through all the possibilities of a and b
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            // storing the max of each category using ternary operator
            // ternary operator ==>   value = (condition) ? IfTrue : IfFlase ;
            maxAnd= (k>((maxAnd > (i&j))?maxAnd:(i&j)))?((maxAnd > (i&j))?maxAnd:(i&j)):maxAnd;
            maxOr= (k>((maxOr > (i|j))?maxOr:(i|j)))?((maxOr > (i|j))?maxOr:(i|j)):maxOr;
            maxXor=(k>((maxXor > (i^j))?maxXor:(i^j)))?((maxXor > (i^j))?maxXor:(i^j)):maxXor;
        }
    }
    // printing the results on terminal
    printf("%d\n%d\n%d",maxAnd,maxOr,maxXor);
}

// main function
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
