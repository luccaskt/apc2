#include <stdio.h>
#include <string.h>

void concatenarStrings(char* str1, char* str2) {
    while (*str1 != '\0') {
        str1++;
    }
    
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    
    *str1 = '\0';
}

int main() {
    char string1[50] = "hello";
    char string2[] = "world";
    
    concatenarStrings(string1, string2);
    
    printf("Strings concatenadas: %s\n", string1);
    
    return 0;
}