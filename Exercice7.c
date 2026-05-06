/*
VARIABLES:
  t[3]: tableau réel
  e: réels
  i: entier
DEBUT:
  e=t[0]
  POUR(i=0, i<3, i=i+1)
    AFFICHER("Entrer la valeur de t",i)
    LIRE (t[i])
      SI(t[i]>=e) ALORS
        e=t[i]
      FINSI
  FINPOUR
  AFFICHER("Maximum: ",e)
FIN
*/
#include<stdio.h>
int main()
{
  int i;
  float t[3], e;
  e=t[0];
  for(i=0; i<3; i++)
  {
    printf("Entrer la valeur de t[%d]: ", i);
    scanf("%f", &t[i]);
      if(t[i]>=e)
      {
        e=t[i];
      }
  }
  printf("Maximum: %.2f\n", e);
return(0);
}
      
      
