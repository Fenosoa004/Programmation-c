#include<stdio.h>
void recup(int *x);
void signe(int *y);

void recup(int *x)
{
  printf("Entrer un nombre: ");
  scanf("%d", x);
}

void signe(int *y)
{
  if (*y<0)
  {
    printf("Négatif\n");
  }
  else
  {
    printf("Positif\n");
  }
}

int main()
{
  int a;
  recup(&a);
  signe(&a);
  return(0);
}
