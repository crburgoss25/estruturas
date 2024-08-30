#define TAMANHO 10

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha 
{
    int inicio;
    int fim;
    int arrayPilha[TAMANHO];
} TPilha;

TPilha pilha;

// Função para inicializar a pilha
void inicializaPilha() 
{
    pilha.inicio = -1; // Indica que a pilha está vazia
}

// Função para verificar o tamanho da pilha
int tamanhoDaPilha() {
    return pilha.inicio + 1; // O tamanho é o índice do topo + 1
}

/*int tamanhoDaPilha()
 {
    if (pilha.fim - pilha.inicio < 0)
	 {
        return (pilha.fim + TAMANHO) - pilha.inicio;
    }
    return pilha.fim - pilha.inicio;
}*/

void insereNaPilha(int el) 
{
    // Testar:
    // SÃ³ posso inserir se o tamanho da pilha for menor que o tamanho do vetor
    pilha.arrayPilha[pilha.fim] = el;
    pilha.fim++;
}

int removeDaPilha() 
{
    // Testar:
    // SÃ³ posso remover da pilha se o tamanho da pilha for maior que zero
        int el = pilha.arrayPilha[pilha.inicio];
        pilha.inicio--;
        return el;
}

void mostrarPilha() 
{
    for (int i = pilha.inicio; i < pilha.fim; i++)
	{
        printf("%d ", pilha.arrayPilha[i]);
    }
    printf("\n");
}


int main() 
{
inicializaPilha();
  while (1 == 1)
    {
        int opcao, add;
        printf("--- BEM VINDO AO SISTEMA SUPIMPA --- \n\n");
        printf(" O que voce deseja fazer hoje ?\n\n");
        printf(" 1- Exibir a pilha\n");
        printf(" 2- Inserir na pilha\n");
        printf(" 3- remover da pilha\n");
        printf(" 0- sair\n\n: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
            if(tamanhoDaPilha() > 0)
            {
                mostrarPilha();
                system("pause");
                break;
            }
            else
            {
                printf("Nao tem ninguem na pilha esperando\n");
                system("pause");
                break;
            }
            case 2:
                printf("Digite um numero para inserir na pilha:\n");
                scanf("%d",&add);
                printf("Você digitou o numero: %d" ,add);
                insereNaPilha(add);
                break;
            case 3:
                if(tamanhoDaPilha() > 0)
                {
                    add = removeDaPilha();
                    printf("%d Saiu da pilha\n", add);
                    system("pause");
                    break;
                }
                else
                {
                    printf("Não há ninguem na \n");
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