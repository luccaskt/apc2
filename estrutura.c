#include <stdio.h>

// estruturaçao de dados
// declarar 10 inteiros
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
// int numeros[10]; estruturado

// Declarar uma pessoa
// nao estruturado
char nome[100];
char genero;
unsigned int dia, mes, ano;

// estruturado
struct data{
  unsigned int dia;
  unsigned int mes;
  unsigned int ano;
};

struct pessoa{
  char nome[100];
  char genero;
  struct data data_nasc;
};

// preencher pessoa
void preencher_pessoa(struct pessoa *pessoa) {
  printf("Preechendo pessoa:\n");
  printf("------------------\n");
  printf("Informe o nome: ");
  scanf("%99[^\n]%*c", pessoa->nome); // scanf("%s", (*pessoa).nome;
  // Apenas windows
  // fflush(stdin);
  // soluçao para linux e windows
  // getchar();
  
  printf("Informe o genero (M, F, X): ");
  // pessoa->genero = getchar(); // (*pessoa).genero = getchar();
  scanf("%c%*c", &pessoa->genero); // scanf("%c%*c", &(*pessoa).genero);
  
  printf("Informe a data de nascimento (dd/mm/aaaa): ");
  scanf("%d/%d/%d%*c"
    , &pessoa->data_nasc.dia
    , &pessoa->data_nasc.mes
    , &pessoa->data_nasc.ano);
  // scanf("%d/%d/%d"
  // , &(*pessoa).data_nasc.dia
  // , &(*pessoa).data_nasc.mes
  // , &(*pessoa).data_nasc.ano);
  

}

// exibir pessoa
void exibir_pessoa(struct pessoa pessoa) {
  printf("%s, genero : %c, data de nasc: %02d/%02d/%02d\n"
    , pessoa.nome, pessoa.genero
    , pessoa.data_nasc.dia, pessoa.data_nasc.mes, pessoa.data_nasc.ano);
}

int main(void) {
 struct pessoa p1, p2;
  preencher_pessoa(&p1);
  preencher_pessoa(&p2);
  exibir_pessoa(p1);
  exibir_pessoa(p2);

  struct data data, *pdata;
  // acessar propriedades de uma estrutura sem ponteiro
  data.dia = 8;
  data.mes = 5;
  data.ano = 2024;
  // printf("data: %02d/%02d/%02d\n", data.dia, data.mes, data.ano);
  
  // acessar propriedades de uma estrutura de um ponteiro
  pdata = &data;
  // printf("dia: %d\n", pdata->dia);
  // printf("dia: %d\n", (*pdata).dia);
  pdata->dia = 21;
  pdata->mes = 07;
  pdata->ano = 2005;
  
  
  
  

  return 0;
}