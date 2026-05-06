/*
  VARIABLES:
  a, b, m, s: réels
  DEBUT:
  AFFICHER ("Entrer la première note: ")
  LIRE (a)
  AFFICHER ("Entrer la deuxième note: ")
  LIRE (b)
  s=a+b
  AFFICHER (S)
  m=s/2
  AFFICHER (m)
  FIN
*/
#include<stdio.h>
int main()
{
  float a, b, s, m;
  printf("Entrer la première note: ");
  scanf("%f", &a);
  printf("Entrer la deuxième note: ");
  scanf("%f", &b);
  s=a+b;
  m=s/2;
  printf("Somme: %.2f\n", s);
  printf("Moyenne: %.2f\n", m);
return(0);
}
  
