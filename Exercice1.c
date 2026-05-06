/*
Variables:
a: réel
Debut:
AFFICHER ("Entrer un nombre: ")
LIRE (a)
SI (a<0) ALORS
  AFFICHER ("Négatif")
SINON
  AFFICHER ("Positif")
FINSI
FIN
*/

#include<stdio.h>
int main()
{
  int a;
  printf("Entrer un nombre: ");
  scanf("%d", &a);
  if (a<0)
  {
    printf("Négatif\n");
  }
  else
  {
    printf("Positif\n");
  }
return(0);
}

