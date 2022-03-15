/* reverse the user input array

Given an array, of size n, reverse it.
Example: If array, arr = [1,2,3,4,5], after reversing it, the array should be, 
arr[5,4,3,2,1].

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr,*arr2,i;
    // taking the array size input from the user
    scanf("%d", &num);
    // dynamically creating array of give size
    arr = (int*) malloc(num * sizeof(int));
    // taking input from use and storing it
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    // creating the secondary array of same size to store reveresed values 
    arr2 = (int*) malloc(num * sizeof(int));
    // storing the values in reversed order
    for(i=1;i<=num;i++)
    {
        arr2[i-1] = arr[num-i];
    }
    // printing the secondary array as output
    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
    return 0;
}
