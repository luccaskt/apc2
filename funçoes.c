#include <stdio.h>
// // funcao soma
// int soma(int x, int y) {
//     return x + y;
// }
// // funcao main
// int main() {
//     int sum = soma(5, 3);
//     printf("A soma de de 5 + 3 é: %d\n", sum);
//     printf("A soma de 3 + 3 é: %d\n", soma(3, 3));
//     printf("A soma de 2 + 4 é: %d\n", soma(2, 4));
//     return 0;
// }

void linha(int x) {
  for(int i = 1 ; i <= 7 ; x++)
  printf("*");

  printf("\n");
}

void linha2(int y, char ch) {
    for( int i = 1; i<= y; y++)
    printf("%c", ch);

  printf("\n");


    

}
int main() {
    linha2(5, '#' ); // linha5x (); #####
    linha2(3, '%' ); // linha3x (); %%%
    linha2(7, '*' ); // linha7x (); 
    linha2(5, '&' );
    linha2(3, '*' );


    return 0;

}
