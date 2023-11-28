#include <stdio.h>
#include <stdlib.h>

/*Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
A quantidade de números ímpares;
A quantidade de números negativos;
O maior e o menor número;
A média de números pares;
A média de números inseridos.
*/

int main()
{

  int num[5];
  int somaPar = 0;
  int negativo = 0;
  float mediaPar;
  int impar = 0;
  int par = 0;
  int soma = 0;
  int maior = 0;
  int menor = 9999;
  float media;
  int i;

  for (i = 0; i < 5; i++)
  {

    printf("digite um numero: ");
    scanf("%d", &num[i]);
    soma += num[i];

    if (num[i] % 2 == 0)
    {
      par++;
      somaPar += num[i];
    }
    else
    {
      impar++;
    }
    if (num[i] < 0)
    {
      negativo++;
    }
    if (num[i] > maior)
    {
      maior = num[i];
    }

    if (num[i] < menor)
    {
      menor = num[i];
    }
  }

  media = soma / (float)i;
  mediaPar = somaPar / (float)par;

  printf("impar: %d\n", impar);
  printf("negativos: %d\n", negativo);
  printf("media par: %.1f\n", mediaPar);
  printf("media: %.1f\n", media);

  printf("maior numero: %d \n", maior);
  printf("menor numero: %d\n", menor);

  return 0;
}