#include<stdio.h>

int main() {
    // Write a program to find greatest of four numbers entered by the user.
    int a=10, b=60, c=45, d=35;
    if(a>b && a>c && a>d){
        printf("a is greater");
    }
    else if(b>a && b>c && b>d){
        printf("b is greater");
    }
    else if(c>b && c>a && c>d){
        printf("c is greater");
    }
    else{
        printf("d is greater");
    }
    return 0;
}