#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Lista Duplamente Encadeada

// Define a estrutura do nodo
typedef struct TipoNo
{
  int info;
  struct TipoNo *proximo;
  struct TipoNo *anterior;
} TNo;

// Cria o inicio da lista
typedef struct TipoLista
{
  TNo *inicio = NULL;
  TNo *fim = NULL;
} TLista;

//------------------------------------------------------------------------------------
// Funcao que define a Lista como vazia.
void inicializaLista(TLista *pLista)
{
  pLista->inicio = NULL;
  pLista->fim = NULL;
}
//------------------------------------------------------------------------------------
// Funcao que insere um elemento do inicio da lista
void inserirNoInicio(TLista *pLista)
{
  TNo *novoElemento;
  novoElemento = new TNo;
  printf("Informe Valor: ");
  scanf("%d", &novoElemento->info);

  novoElemento->proximo = NULL;
  novoElemento->anterior = NULL;

  if (pLista->inicio == NULL)
  {
    pLista->inicio = novoElemento;
    pLista->fim = novoElemento;
  }
  else
  {
    pLista->inicio->anterior = novoElemento;
    novoElemento->proximo = pLista->inicio;
    pLista->inicio = novoElemento;
  }
}
