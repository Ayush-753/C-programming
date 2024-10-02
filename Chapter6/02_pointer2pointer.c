#include<stdio.h>

int main() {
    int i = 10;
    int* j = &i;
    int** k = &j;
    printf("The value of i is %p\n", i);
    printf("The value of i is %p\n", *(&i));
    printf("The value of i is %p\n", *j);
    printf("The value of i is %p\n", **(&j));
    printf("The value of i is %p\n", ***(&k));

    return 0;
}