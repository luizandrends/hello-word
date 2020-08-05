#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int a = 0;
  int b = 0;
  int soma = 0;

  printf("Informe um valor para A: ");
  scanf("%d", &a);

  printf("Informe um valor para B: ");
  scanf("%d", &b);

  soma = a + b;

  printf("Soma: %d", soma);

  return soma;
}