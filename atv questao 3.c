#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

int main()
{
    char nomes[MAX_CONTATOS][50];
    char telefones[MAX_CONTATOS][15];
    int numContatos = 0;
    int opcao;

    do
    {
        printf("\n1 - Adicionar Contato\n");
        printf("2 - Mostrar Contatos\n");
        printf("3 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (numContatos < MAX_CONTATOS)
            {
                printf("Digite o nome: ");
                scanf("%s", nomes[numContatos]);

                printf("Digite o numero de telefone: ");
                scanf("%s", telefones[numContatos]);

                numContatos++;
                printf("Contato adicionado com sucesso!\n");
            }
            else
            {
                printf("A agenda esta cheia. nao e possivel adicionar mais contatos.\n");
            }
            break;
        case 2:
            printf("Contatos cadastrados:\n");
            for (int i = 0; i < numContatos; i++)
            {
                printf("%s: %s\n", nomes[i], telefones[i]);
            }
            break;
        case 3:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
