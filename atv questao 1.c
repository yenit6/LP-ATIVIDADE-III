#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade.*/

int main()
{
  setlocale(LC_ALL, "portuguese");

  char nome[5][500];
  int idade[5][5];
  float peso[5][5];
  float altura[5][5];
  int i, j;
  float menorAltura = 9999999;
  float maiorAltura = 0;
  float menorPeso = 9999999;
  float maiorPeso = 0;
  int menorIdade = 9999999;
  int maiorIdade = 0;

  for (i = 0; i < 5; i++)
  {
    printf("digite o %d° nome: ", i + 1);
    scanf("%s", &nome[i]);
    for (j = 0; j < 1; j++)
    {
      printf("digite a idade: ");
      scanf("%d", &idade[i][j]);
      if (idade[i][j] > maiorIdade)
      {
        maiorIdade = idade[i][j];
      }
      if (idade[i][j] < menorIdade)
      {
        menorIdade = idade[i][j];
      }
    }
    for (j = 0; j < 1; j++)
    {
      printf("digite o peso: ");
      scanf("%f", &peso[i][j]);
      if (peso[i][j] > maiorPeso)
      {
        maiorPeso = peso[i][j];
      }
      if (peso[i][j] < menorPeso)
      {
        menorPeso = peso[i][j];
      }
    }
    for (j = 0; j < 1; j++)
    {
      printf("digite a altura: ");
      scanf("%f", &altura[i][j]);
      if (altura[i][j] > maiorAltura)
      {
        maiorAltura = altura[i][j];
      }
      if (altura[i][j] < menorAltura)
      {
        menorAltura = altura[i][j];
      }
    }
  }

  for (i = 0; i < 5; i++)
  {
    printf("nome: %s\n", nome[i]);
    for (j = 0; j < 1; j++)
    {
      printf("idade: %d\n", idade[i][j]);
    }
    for (j = 0; j < 1; j++)
    {
      printf("peso: %.1f\n", peso[i][j]);
    }
    for (j = 0; j < 1; j++)
    {
      printf("altura: %.2f\n", altura[i][j]);
    }
  }
  printf("");
  printf("maior altura: %.2f\n", maiorAltura);
  printf("menor altura: %.2f\n", menorAltura);
  printf("maior idade: %d\n", maiorIdade);
  printf("menor idade: %d\n", menorIdade);
  printf("maior peso: %.1f\n", maiorPeso);
  printf("menor peso: %.1f\n", menorPeso);

  return 0;
}
