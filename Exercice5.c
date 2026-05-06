/*
VARIABLES:
a, b, c, d, x, y, s, e, f;
DEBUT:
AFFICHER ("Entrer la valeur de a: ")
LIRE (a)
AFFICHER ("Entrer la valeur de b: ")
LIRE (b)
AFFICHER ("Entrer la valeur de c: ")
LIRE (c)

SI (a=0 ET b!=0) ALORS
  s=(-c)/(2b)
  AFFICHER ("Equation linéaire qui s'annule au point", s)
SINON SI (a=0 ET b=0) ALORS
  AFFICHER ("Equation impossible")
SINON 
  d=(b*b)-(4*a*c)
  SI (d<0) ALORS
    e=(-b)/(2*a)
    f=sqrt(-d)/(2*a)
    AFFICHER ("L'equation admet deux solutions complexes")
    AFFICHER ("x'=",e,"+",f,"i")
    AFFICHER ("x''=",e,"-",f,"i")
  SINON
    x=(-b-sqrt(d))/(2*a);
    y=(-b+sqrt(d))/(2*a);
    AFFICHER("L'equation admet deux solutions : ");
    AFFICHER (x);
    AFFICHER (y);
  FINSI
FIN
*/

#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, d, x, y, s, e, f;
  printf("Entrer la valeur de a: ");
  scanf("%f", &a);
  printf("Entrer la valeur de b: ");
  scanf("%f", &b);
  printf("Entrer la valeur de c: ");
  scanf("%f", &c);
  d=pow(b,2)-(4*a*c);
  if (a==0 && b!=0)
  {
    s=-c/b;
    printf("Equation lineaire qui s'annulle en x= %.2f\n", s);
  }
  else if (a==0 && b==0)
  {
    printf("Equation impossible");
  }
  else if (d<0)
  {
    if(a>0)
    {
      e=-b/(2*a);
      f=sqrt(-d)/(2*a);
      printf("L'equation admet deux solutions complexes:\n");
      printf("x'= %.2f-%.2fi\n", e, f);
      printf("x''= %.2f+%.2fi\n", e, f);
    }
    else
    {
      e=-b/(2*a);
      f=-sqrt(-d)/(2*a);
      printf("L'equation admet deux solutions complexes:\n");
      printf("x'= %.2f+%.2fi\n", e, f);
      printf("x''= %.2f-%.2fi\n", e, f);
    }
  }
  else
  {
    x=(-b-sqrt(d))/(2*a);
    y=(-b+sqrt(d))/(2*a);
    printf("L'equation admet deux solutions :\n");
    printf("x'= %.2f\n", x);
    printf("x''= %.2f\n", y);
  }
return(0);
}
