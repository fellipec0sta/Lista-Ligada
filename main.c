#include <stdio.h>
#include <stdlib.h>
#include "listaligada.h"
#include <string.h>

int main()
{
    char funcao[20];
    int valor;
    ListaLigada *ListaLigada = criarListaLigada();
    do{

       // printf("Insira a funcao e o valor: ");
        scanf("%s %d", funcao, &valor);
        //criarListaLigada();

        if (strcmp(funcao,"adicionarFinal") == 0){
            adicionarFinal(ListaLigada, valor);
            printf("- \n");
        }

        else if (strcmp(funcao,"print") == 0){
            print(ListaLigada);
        }

        else if (strcmp(funcao,"getTamanho") == 0){
            printf("%d\n", getTamanho(ListaLigada));
        }

        else if (strcmp(funcao,"getNumero") == 0){
            printf("%d\n", getNumero(ListaLigada, valor));
        }

        else if (strcmp(funcao,"adicionarInicio") == 0){
            adicionarInicio(ListaLigada, valor);
            printf("- \n");
        }

        else if (strcmp(funcao,"remover") == 0){
            remover(ListaLigada, valor);
            printf("- \n");
        }

        else if (strcmp(funcao,"getIndice") == 0){
            printf("%d\n", getIndice(ListaLigada, valor));
        }

        else if(strcmp(funcao, "fri") == 0){
            free(ListaLigada);
        }

    } while(strcmp(funcao,"fim") != 0);

    return 0;
}