// Print a pattern of numbers from  to  as shown below. Each of the numbers is 
// separated by a single space.

//          4 4 4 4 4 4 4  
//          4 3 3 3 3 3 4   
//          4 3 2 2 2 3 4   
//          4 3 2 1 2 3 4   
//          4 3 2 2 2 3 4   
//          4 3 3 3 3 3 4   
//          4 4 4 4 4 4 4 

#include <stdio.h>

// main function
int main() 
{

    int n,i,j,smallerone;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    //   first half of the pattern
    for(i=0;i<n;i++){
        // first half of the row
        for(j=0;j<n;j++){
            // taking the smaller from inner and outer loop to subtract
            smallerone= (j>i)?i:j;
            printf("%d ",n-smallerone);
        }
        // second half of the row
        for(j=n-2;j>=0;j--){
            // taking the smaller from inner and outer loop to subtract
            smallerone= (j>i)?i:j;
            printf("%d ",n-smallerone);
        }
        // moving to the next line
        printf("\n");
    }
    // second half of the pattern
    for(i=n-2;i>=0;i--){
        // first half of the row
        for(j=0;j<n;j++){
            // taking the smaller from inner and outer loop to subtract
            smallerone= (j>i)?i:j;
            printf("%d ",n-smallerone);
        }
        // second half of the row
        for(j=n-2;j>=0;j--){
            // taking the smaller from inner and outer loop to subtract
            smallerone= (j>i)?i:j;
            printf("%d ",n-smallerone);
        }
        // moving to the next line
        printf("\n");
    }
    return 0;
}
