/*
Variables:
a: entier
b: entier
Début:
AFFICHER ("Entrer la valeur de a: ")
LIRE (a)
AFFICHER ("Entrer la valeur de B: ")
LIRE (b)
SI (a<0 ET b<0 OU a>0 ET b>0) ALORS
  AFFICHER("Leur produit est positif")
SINON
  AFFICHER("Leur produit est négatif")
FINSI
FIN
*/
#include<stdio.h>
int main()
{
  int a, b;
  printf("Entrer la valeur de a: ");
  scanf("%d", &a);
  printf("Entrer la valeur de b: ");
  scanf("%d", &b);
  if (a<0 && b<0 || a>0 && b>0)
  {
  printf("Leur produit est positif\n");
  }
  else
  {
  printf("Leur produit est négatif\n");
  }
return(0);
}
