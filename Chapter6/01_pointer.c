#include<stdio.h>

int main() {
    int i = 72;
    int* j = &i; // j is pointer pointing to i i.e it stores address of i
    int k = 67;
    printf("The address of i is %u\n", *(&i));
    printf("The address of i is %u\n", *j);
    printf("The address of k is %u\n", &k);
    return 0;
}