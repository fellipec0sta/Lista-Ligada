#ifndef LISTALIGADA_H_INCLUDED
#define LISTALIGADA_H_INCLUDED
//definição de structs
//assinaturas das funções
typedef struct No No;

struct No{
    int numero;
    struct No *next;
};

struct ListaLigada{

   No *inicio;
   No *fim ;
};

typedef struct ListaLigada ListaLigada;

//aloca uma nova lista ligada e inicializa seus campos
ListaLigada *criarListaLigada();
//adiciona no final da lista ligada um novo nó com o número passado como parâmetro
void adicionarFinal(ListaLigada *lista, int numero);
//adiciona no início da lista ligada um novo nó com o número passado como parâmetro
void adicionarInicio(ListaLigada *lista, int numero);
//retorna o número do i-ésimo nó da lista ligada
int getNumero(ListaLigada *lista, int i);
//retorna a posição do primeiro nó da lista que contém o número passado como parâmetro
int getIndice(ListaLigada *lista, int x);
//remove todos os nós que contém o número passado como parâmetro
void remover(ListaLigada *lista, int x);
//retorna o número de nós da lista ligada
int getTamanho(ListaLigada *lista);
//escreve na tela todos os números da lista ligada no seguinte formato: a, b, c, ... z
void print(ListaLigada *lista);
//libera toda a memória utilizada pela lista ligada
void fri(ListaLigada *lista);



#endif // LISTALIGADA_H_INCLUDED
