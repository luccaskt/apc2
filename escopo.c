#include <stdio.h>

int var_global = 7;
int global = 5;

int n = 10; // global

int main() {

    printf("var_global: %d, global: %d\n", var_global, global);
    int x  = 1;
    printf("x: %d, n: %d\n", x, n);
    {

    
    int n = 2;
    printf("x: %d, n: %d\n", x, n);
    }
    printf("x: %d, n: %d\n", x, n);


    for(int i = 0; i <n; i++) {
        printf("i: %d\n", i);
    }
    // printf("i: %d\n", i);
    for(int i = 0, n = 8; i < n; i++) {
        printf("i: %d\n", i);
    }


    return 0;
}