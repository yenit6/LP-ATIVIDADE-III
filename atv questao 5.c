#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar uma venda
struct Venda
{
    char nome[50];
    float preco;
    int quantidade;
};

int main()
{
    int maxVendas = 100;
    struct Venda vendas[maxVendas];
    int indiceVenda = 0;
    int opcao;

    do
    {
        
        printf("\nMenu:\n");
        printf("1. Adicionar Venda\n");
        printf("2. Exibir Total de Vendas e Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

      
        switch (opcao)
        {
        case 1:
         
            printf("\nDigite o nome do produto: ");
            scanf("%s", vendas[indiceVenda].nome);
            printf("Digite o preco do produto: ");
            scanf("%f", &vendas[indiceVenda].preco);
            printf("Digite a quantidade vendida: ");
            scanf("%d", &vendas[indiceVenda].quantidade);

          
            indiceVenda++;

            break;

        case 2:
          
            float totalVendas = 0;
            printf("\nVendas realizadas:\n");

            for (int i = 0; i < indiceVenda; i++)
            {
                printf("%s - Preco: %.2f - Quantidade: %d\n", vendas[i].nome, vendas[i].preco, vendas[i].quantidade);
                totalVendas += vendas[i].preco * vendas[i].quantidade;
            }

            printf("\nTotal de Vendas: %.2f\n", totalVendas);
            break;

        default:
            printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
