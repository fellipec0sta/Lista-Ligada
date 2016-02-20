#include <stdlib.h>
#include <stdio.h>
#include "listaligada.h"


ListaLigada *criarListaLigada(){

ListaLigada *listaligada;
listaligada = (ListaLigada *) malloc(sizeof(ListaLigada));
listaligada->inicio = NULL;
listaligada->fim = NULL;
}

void adicionarFinal(ListaLigada *lista, int numero){
    No *no;
    no = (No *) malloc(sizeof(No));


    if(lista -> inicio == NULL){
        no -> numero = numero;
        no -> next = NULL;
        lista->inicio =no;
        lista -> fim = no;
    }else{
     lista -> fim -> next = no;
     no -> numero = numero;
     no -> next = NULL;
     lista -> fim = no;
    }
}

void adicionarInicio(ListaLigada *lista, int numero){
    No *no;
    no = (No *) malloc(sizeof(No));
    no -> numero = numero;
     no -> next = lista -> inicio;
     lista -> inicio = no;


}

int getNumero(ListaLigada *lista, int i){
    No *interesse;
    int cont = 0;
    interesse = (No *) malloc(sizeof(No));
    interesse = lista->inicio;

    for(;cont < i;cont++)
        interesse = interesse->next;
    return interesse->numero;
}

int getIndice(ListaLigada *lista, int x){
    No *no;
    int cont = 0;
    for(no = lista->inicio;no->numero != x;no = no->next, cont++){
        if(no->next == NULL)
            return -1;
    }
    return cont;
}

int getTamanho(ListaLigada *lista){
    No *interesse;
    int cont = 0;
    if (lista -> inicio != NULL){
        for(interesse = lista->inicio;interesse != NULL;interesse = interesse->next, cont++);
    }
    return cont;

}

void remover(ListaLigada *lista, int x)
{
    No *interesse;
    No *anterior;
    anterior = NULL;

    interesse = (No *) malloc(sizeof(No));
    interesse = lista->inicio;


    if (lista->inicio != NULL && lista->fim != NULL){

        do
        {
            if(interesse->numero == x){
                if(anterior == NULL){
                    lista->inicio = interesse->next;
                }
                else if(interesse->next == NULL){
                    lista->fim = anterior;
                    anterior->next = NULL;
                }else{
                    anterior->next = interesse->next;
                }
            }else{
                anterior = interesse;
            }
            interesse = interesse->next;
        } while(interesse != NULL);
    }
}

void print(ListaLigada *lista)
{
    No *print;
    if (lista->inicio != NULL || lista->fim != NULL)
    {
        for(print = lista->inicio;print != NULL; print = print->next)
        {
            printf("%d ", print->numero);
        }
    }
    printf("\n");
}

void fri(ListaLigada *lista){
    No *interesse;
	for(interesse = lista->inicio;interesse->next != NULL; interesse = interesse->next){
		free(interesse);
	}
}
