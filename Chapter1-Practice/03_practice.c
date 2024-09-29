#include<stdio.h>

int main() {
    float c, f;
    scanf("%f", &c);
    f = (9.0/5.0)*c + 32;
    printf("The farenheit for celcius %f is %f F", c, f);
    return 0;
}