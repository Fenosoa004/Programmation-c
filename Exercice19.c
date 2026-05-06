/*
VARIABLES:
i,a: entier
DEBUT:
AFFICHER("Donner un nombre: ")
LIRE (a)
POUR (i<-2, i<a, i<-i+1)
  SI (a%i=0) ALORS
    AFFICHER ("Non premier")
    SIRTIR
  SINON SI (a-1=i) ALORS
          AFFICHER ("Premier")
        SINON
          CONTINUE
        FINSI
   FINSI
FINPOUR
FIN
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
  int a, i;
  printf("Donner un nombre: ");
  scanf("%d", &a);
  for(i=2; i<a; i++)
    {
      if(a%i==0)
        {
          printf("Non premier\n");
          break;
        }
      else if(a-1==i)
              {
                printf("Premier\n");
              }
            else
              {
                continue;
              }
     }
return(0);
}
              
          
