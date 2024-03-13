#include <stdio.h>

int main() {       // 0 1 2 3 4 5 6 7 8 9 10 11
                   //[H,e,l,l,o, ,w,o,r,l,d, \0]    
    char string[] = "Hello world";
    char *p1 = string; // &string[0]
    
    //notaçao vetor
    //while(string[i] != '\0') {
        //i++;
    //}
    //notaçao ponteiro
    char *ptr = string; // ptr = &string[0]
    while(*ptr != '\0') {
        *ptr++;
    }
    int lenght = ptr-string;
    printf("lenght(string): %d\n", lenght);


}