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