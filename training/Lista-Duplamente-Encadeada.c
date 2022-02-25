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