/*
VARIABLES:
i,n: entier
a: réel
DEBUT:
AFFICHER("Etrer la valeur de n: ")
LIRE (n)
a<-0
POUR (i<-1, i<=n, i<-i+1)
  a<-a+1/i
FINPOUR
AFFICHER (a)
FIN
*/
#include<stdio.h>
int main()
{
  float a,i,n;
  printf("Etrer la valeur de n: ");
  scanf("%f", &n);
  a=0;
  for (i=1;i<=n; i++) 
  {
    a=a+(1/i);
  }
  printf("%.2f\n", a);
return(0);
}
