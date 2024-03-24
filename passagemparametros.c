#include <stdio.h>

int soma(int x, int y) {
    return x + y;
}

void alterarX(int x, int y) {
    x = y;
}


void alterarXRef(int x ,  int y) {
   x = y; 
}
    




int main() {
    int x = 5, y = 7;
    printf("soma: %d\n", soma(x, y));
    alterarX( x,  y);
    printf("o valor de x é: %d\n", x);
    alterarXRef(x, y);
    printf("O valor de x é: %d\n", x);




    return 0; 

}