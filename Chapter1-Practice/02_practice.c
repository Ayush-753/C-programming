#include<stdio.h>

int main() {
    int r,h;
    scanf("%d", &r);
    scanf("%d", &h);
    printf("The area of circle with radius %d is %f\n", r, 3.14*r*r);
    printf("The area of cylinder with radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}