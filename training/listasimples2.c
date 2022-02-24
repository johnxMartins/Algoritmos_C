#include <stdio.h>
#include <stdlib.h>

typedef struct aluno Aluno;
struct aluno
{
  char matricula[10];
  char nome[40];
  float media;
  struct aluno *prox;
}

Aluno *
criar_aluno()
{
  Aluno *aluno = (Aluno *)malloc(sizeof(Aluno)) return aluno;
}

void imprimir(Aluno *Lista)
{
  Aluno *aux = Lista;
  while (aux != NULL)
  {
    printf("%s", aux->matricula);
    printf("%s", aux->nome);
    printf("%f", aux->media);
    aux = aux->prox;
  }
}

int main()
{
  Lista = NULL;
  Aluno *lista = NULL;
  scanf("%s", aluno->matricula);
  while (aluno->matricula != 0)
  {
    Aluno *aluno = criar_aluno();
    scanf("%s", &aluno->nome);
    scanf("%f", &aluno->media);

    if (Lista == NULL)
    {
      aluno->prox = NULL;
      Lista = aluno;
    }
    else
    {
      Aluno *aux = Lista;
      while (aux->prox != NULL)
      {
        aux = aux->prox;
      }
      aluno->prox = NULL;
      aux->prox = aluno;
    }
    return Lista;
  }

  imprimir(lista);
  return 0;
}