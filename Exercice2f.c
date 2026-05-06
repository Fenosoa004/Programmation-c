#include<stdio.h>
void recup(int *a, int *b);
void signe(int *a, int *b);

void recup(int *a, int *b)
{
  printf("Entrer a: ");
  scanf("%d", a);
  printf("Entrer b: ");
  scanf("%d", b);  
}

void signe(int *a, int *b)
{
  if((*a)==0 || (*b)==0)
  {
    printf("Leurs produit est nulle\n");
  }
  else if((*a)>0 && (*b)>0 || (*a)<0 && (*b)<0)
  {
    printf("Leurs produit est positif\n");
  }
  else
  {
    printf("Leurs produit est négatif\n");
  }
}

int main()
{
  int a,b;
  recup(&a,&b);  
  signe(&a,&b);
  return 0;
}
