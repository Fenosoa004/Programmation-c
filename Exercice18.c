/*
VARIABLES:
a,b,b: entrer
DEBUT:
AFFICHER("Entrer la valeurde a: ")
LIRE (a)
AFFICHER("Entrer la valeurde b: ")
LIRE (b)
TANTQUE (b>0)
  c<-a%b
  a<-b
  b<-c
FINTANTQUE
AFFICHER("PGCD: ",a)
FIN
*/
#include<stdio.h>
#include<math.h>
int main()
{
  int a, b, c;
  printf("Entrer la valeur de a: ");
  scanf("%d", &a);
  printf("Entrer la valeur de b: ");
  scanf("%d", &b);
  while(b>0)
    {
      c=a%b;
      a=b;
      b=c;
    }
  printf("PGCD: %d\n", a);
return(0);
}


