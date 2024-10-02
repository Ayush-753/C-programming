#include<stdio.h>

int main() {
    int i=2;
    printf("--i = %d\n", --i); // Decrement i first and then print
    printf("Now i = %d\n", i); 
    i = 2;
    printf("i-- = %d\n", i--); // Print i first and then decrement
    printf("Now i = %d\n", i);
    return 0;
}