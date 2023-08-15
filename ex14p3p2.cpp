#include <stdlib.h>
#include <stdio.h>


int main()
{
  typedef struct scale_node_s
  {
    char note[4];
    struct scale_node_s *linkp;
  }scale_node_t;

  scale_node_t *scalep, *prevp, *newp;
  int i;

  scalep = (scale_node_t *)malloc(sizeof(scale_node_t));
  scanf("%s", scalep->note);
  prevp = scalep;

  for(i=0; i<7; i++)
  {
    newp = (scale_node_t*)malloc(sizeof(scale_node_t));

    scanf("%s", newp->note);
    prevp->linkp = newp;
    prevp = newp;
  }

  newp->linkp = NULL;

  for(i=0; i<8; i++)
  {
    printf("%s ", scalep->note);
    scalep = scalep->linkp;
  }
  printf("\n");

  return 0;
}
