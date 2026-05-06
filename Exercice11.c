/*
VARIABLES:
i,n,a: entier
DEBUT:
AFFICHER("Etrer la valeur de n: ")
LIRE (n)
a<-1
SI (n==0) ALORS
  AFFICHER ("1")
SINON
  POUR (i<-1, i<=n, i<-i+1)
    a<-a*i
  FINPOUR
  AFFICHER (a)
FINSI
FIN
*/
#include<stdio.h>
int main()
{
  int i,n,a;
  printf("Etrer la valeur de n: ");
  scanf("%d", &n);
  a=1;
  if (n==0)
  {
    printf("1\n");
  }
  else
  {
    for (i=1;i<=n; i=i+1) 
    {
      a=a*i;
    }
    printf("%d\n", a);
  }
return(0);
}
