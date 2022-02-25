#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pxy
{
  int x, y;
  struct pxy *next;
};
typedef struct pxy xy;
int main()
{
  xy *ponto, *first = NULL, *aux;
  int x = 0, y = 0;
  while (x >= 0)
  {
    scanf("%d%d", &x, &y);
    if (x < 0) break;
    ponto=(xy *)malloc(sizeof(xy));
    ponto->x = x;
    ponto->y = y;
    ponto->next = NULL;
    //
    if (first == NULL)
    {
      first = ponto;
      aux = ponto;
    }
    else
    {
      aux->next = ponto;
      aux = ponto;
    }
  }
  for (aux = first; aux != NULL; aux = aux->next)
    printf("x:%d y:%d\n", aux->x, aux->y);

  return 0;
}
