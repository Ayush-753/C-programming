#include<stdio.h>

int main() {
    int mark1, mark2, mark3;
    printf("Enter mark 1:\n");
    scanf("%d", &mark1);
    printf("Enter mark 2:\n");
    scanf("%d", &mark2);
    printf("Enter mark 3:\n");
    scanf("%d", &mark3);
    printf("The marks are %d %d and %d\n", mark1, mark2, mark3);
    if(mark1 < 33 || mark2 < 33 || mark3 < 33){
        printf("You failed due to low mark");
    }
    else if((mark1 + mark2 + mark3)/3 < 40){
        printf("You failed due to low average");
    }
    else
       printf("You are passed");
    return 0;
}
