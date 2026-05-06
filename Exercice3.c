/*
Variables:
A, B, C: entiers
Début:
AFFICHER ("Entrer la valeur de A: ")
LIRE (A)
AFFICHER ("Entrer la valeur de B: ")
LIRE (B)
AFFICHER ("Entrer la valeur de C: ")
LIRE (C)
A=A+B+C
C=A-B-C
B=A-B-C
A=A-B-C
AFFICHER (A)
AFFICHER (B)
AFFICHER (C)
FIN
*/
#include<stdio.h>
int main()
{
  int A, B, C;
  printf("Entrer la valeur de A: ");
  scanf("%d", &A);
  printf("Entrer la valeur de B: ");
  scanf("%d", &B);
  printf("Entrer la valeur de C: ");
  scanf("%d", &C);
  A=A+B+C;
  C=A-B-C;
  B=A-B-C;
  A=A-B-C;
  printf("Valeurs respectives de A, B et C: %d, %d, %d\n", A, B, C);
return(0);
}
