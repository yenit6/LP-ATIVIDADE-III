#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, idade e  5 notas  para cada aluno.
Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a média.
 Após calcular a média, verifique para cada aluno se este estará aprovado (média maior ou igual a 7,0), em recuperação (média menor que 7,0 e maior ou igual a 5,0)
 ou reprovado (média menor que 5,0) com base nestes critérios.*/

int main()
{
  setlocale(LC_ALL, "portuguese");

  float media[5];
  int idade[5][5];
  float nota[5][5];
  char name[5][200];
  int i, j;
  float soma = 0;

  for (i = 0; i < 5; i++)
  {
    printf("digite o nome do aluno:");
    gets(name[i]);

    for (j = 0; j < 1; j++)
    {
      printf("digite a idade: ");
      scanf("%d", &idade[i][j]);
    }
    for (j = 0; j < 5; j++)
    {
      printf("digite a nota do aluno: ");
      scanf("%f", &nota[i][j]);
      soma += nota[i][j];
    }

    media[i] = soma / j;
    soma = 0;
    fflush(stdin);
  }

  for (i = 0; i < 5; i++)
  {
    printf("\nnome dos alunos: %s \n", name[i]);
    for (j = 0; j < 1; j++)
    {
      printf("idade: %d\n", idade[i][j]);
    }

    for (j = 0; j < 5; j++)
    {
      printf("notas: %.1f \n", nota[i][j]);
    }
    printf("media: %.1f\n", media[i]);

    if (media[i] > 7)
    {
      printf("aprovado");
    }
    else if (media[i] < 7 && media[i] >= 5)
    {
      printf("recuperacao");
    }
    else
    {
      printf("reprovado");
    }
  }

  return 0;
}