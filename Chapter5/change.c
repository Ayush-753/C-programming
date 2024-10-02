#include<stdio.h>
int change(int a);

int change(int a){
    a = 77;  //misnomer
    return 0;
}

int main() {
    int b=22;
    change(b); // copy of b 22 is sent hence b remains 22
    printf("%d", b);  // O/P will be 22 not 77
    return 0;
}