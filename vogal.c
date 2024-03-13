#include <stdio.h>

char* encontrarUltimaVogal(char* str) {
    char* ultimaVogal = NULL;
    
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            ultimaVogal = str;
        }
        str++;
    }
    
    return ultimaVogal;
}

int main() {
    char string[] = "Lucca";
    char* enderecoUltimaVogal = encontrarUltimaVogal(string);
    
    if (enderecoUltimaVogal != NULL) {
        printf("Endereço da última vogal: %p\n", (void*)enderecoUltimaVogal);
    } else {
        printf("Nenhuma vogal encontrada.\n");
    }
    
    return 0;
}

