/*
VARIABLES:
i,u,n,a,b: entier
DEBUT:
AFFICHER("Etrer la valeur de n: ")
LIRE (n)
b<-0
POUR (i<-0, i<=n, i<-i+1)
  a<-1
  POUR (u<-1, u<=i, u<-u+1)
    a<-a*u
  FINPOUR
  b<-b+a
FINPOUR
AFFICHER (b)
FIN
*/
#include<stdio.h>
int main()
{
  int i,u,n,a,b;
  printf("Etrer la valeur de n: ");
  scanf("%d", &n);
  b=0;
  a=1;
  for (i=1;i<=n;i=i+1)
  {
    a=a*i;
    b=b+a;
  }
  printf("%d\n", b);
return(0);
}
