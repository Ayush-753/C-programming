#include<stdio.h>

int main() {
    for (int i = 5; i ; i--)
    {
        printf("%d ", i); // prints 5 4 3 2 1 when i becomes 0 it exits loop because 0 is false
    }
    
    return 0;
}