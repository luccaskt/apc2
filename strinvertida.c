#include <stdio.h>
#include <string.h>

void inverterString(char* str) {
    char* p1 = str;
    char* p2 = str + strlen(str) - 1;
    
    while (p1 < p2) {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        
        p1++;
        p2--;
    }
}

int main() {
    char string[] = "hello world";
    
    inverterString(string);
    
    printf("String invertida: %s\n", string);
    
    return 0;
}