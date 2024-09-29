#include<stdio.h>

int main() {
    if(1){
        printf("This is executed\n");
    }
    if(1342){
        printf("This large number is executed\n");
    }
    if('c'){
        printf("This character is executed\n");
    }
    if(0){
        printf("This is not executed");
    }
    return 0;
}