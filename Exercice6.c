/*
VARIABLES:
a,b,m: réels
c,d: entier
DEBUT:
AFFICHER("Entrer la valeurde a: ")
LIRE (a)
AFFICHER("Coefficient: ")
LIRE (c)
AFFICHER("Entrer la valeurde b: ")
LIRE (b)
AFFICHER("Coefficient: ")
LIRE (d)
m=(a+b)/(c+d)
AFFICHER ("Moyenne: ", m)
FIN
*/
#include<stdio.h>
int main()
{
  float a, b, m;
  int c, d;
  printf("Entrer la valeur de a: ");
  scanf("%f", &a);
  printf("Coefficient: ");
  scanf("%d", &c);
  printf("Entrer la valeur de b: ");
  scanf("%f", &b);
  printf("Coefficient: ");
  scanf("%d", &d);
  m=(a+b)/(c+d);
  printf("Moyenne: %.2f\n", m);
return(0);
}

