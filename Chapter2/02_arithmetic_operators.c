#include<stdio.h>

int main() {
    // 5/2 answer is 2
    // 5.0/2 answer is 2.5
    /* int a = 5
       int b = 2
       float c = a/b
       answer is 2
       if we want 2.5 then declare float a = 5
    */  
    // int a = 3.7 is demoted to 3 not 4
    // float a = 3 is promoted to 3.0
    // int k = 3.0/9 value of k will be 0 because 3.0/0 is 0.333 and it will get demoted to 0
    return 0;
}