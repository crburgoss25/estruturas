#define TAMANHO 10

#include <stdio.h>
#include <stdlib.h>

typedef struct fila 
{
    int inicio;
    int fim;
    int arrayFila[TAMANHO];
} TFila;

TFila fila;

int tamanhoDaFila()
 {
    if (fila.fim - fila.inicio < 0)
	 {
        return (fila.fim + TAMANHO) - fila.inicio;
    }
    return fila.fim - fila.inicio;
}

void insereNaFila(int el) 
{
    // Testar:
    // SÃ³ posso inserir se o tamanho da fila for menor que o tamanho do vetor
    fila.arrayFila[fila.fim] = el;
    fila.fim++;
}

int removeDaFila() 
{
    // Testar:
    // SÃ³ posso remover da fila se o tamanho da fila for maior que zero
    int el = fila.arrayFila[fila.inicio];
        fila.inicio++;
        return el;
        printf("Nao ha ninguem na fila");
}

void mostrarFila() 
{
    for (int i = fila.inicio; i < fila.fim; i++)
	{
        printf("%d ", fila.arrayFila[i]);
    }
    printf("\n");
}


int main() 
{
  while (1 == 1)
    {
        int opcao, add;

        printf("--- BEM VINDO AO SISTEMA SUPIMPA --- \n\n");
        printf(" O que voce deseja fazer hoje ?\n\n");
        printf(" 1- Exibir a fila\n");
        printf(" 2- Inserir da fila\n");
        printf(" 3- remover da fila\n");
        printf(" 0- sair\n\n: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
            if(tamanhoDaFila() > 0)
            {
                mostrarFila();
                system("pause");
                break;
            }
            else
            {
                printf("Nao tem ninguem nafila ");
            }
            case 2:
                printf("Digite um numero para inserir na fila:\n");
                scanf("%d",&add);
                printf("Você digitou o numero: %d" ,add);
                insereNaFila(add);
                break;
            case 3:
                if(tamanhoDaFila() > 0)
                {
                    add = removeDaFila();
                    printf("%d Saiu da fila\n", add);
                    system("pause");
                    break;
                }
                else
                {
                    printf("Não há ninguem na fila\n");
                    system("pause");
                    break;
                }
            case 0:
                return 0;
            default:
                break;
            }
    }
}