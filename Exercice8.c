/*
VARIABLES:
i,n: entier
DEBUT:
AFFICHER("Etrer la valeur de n: ")
LIRE (n)
POUR (i<-1, i<=n, i<-i+1)
AFFICHER (i)
FINPOUR
FIN
*/
#include<stdio.h>
int main()
{
  int i,n;
  printf("Etrer la valeur de n: ");
  scanf("%d", &n);
  for (i=1;i<=n; i=i+1) {
    printf("%d\n", i); }
return(0);
}
