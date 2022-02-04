#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100;

typedef struct
{
  int Item[MAXTAM];
  int Topo;
} Tpilha;

void TPilha_Inicia(TPilha *p)
{
  p->Topo = -1;
}

int TPilha_Vazia(TPilha *p)
{
  if (p->Topo == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int TPilha_Cheia(TPilha *p)
{
  if (p->Topo == MAXTAM - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void TPilha_Insere(TPilha *p, int x)
{
  if (TPilha_Cheia(p) == 1)
  {
    printf("ERRO: Pilha Cheia");
  }
  else
  {
    p->Topo++;
  }
}