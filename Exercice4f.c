#include<stdio.h>
void recup(float *a, float *b);
int somme(float *a, float *b);
int moyenne(float *a, float *b);
void calcul(float *a, float *b);

void recup(float *a, float *b)
{
  printf("Entrer a: ");
  scanf("%f", a);
  printf("Entrer b: ");
  scanf("%f", b);
}

int somme(float *a, float *b)
{
  float d;
  d=*a+*b;
  return(d);
}

int moyenne(float *a, float *b)
{
  float c;
  c=somme(a,b)/2;
  return(c);
}

void calcul(float *a, float *b)
{
  float s;
  float m;
  s=somme(a,b);
  m=moyenne(a,b);
  printf("Somme: %.2f\n", s);
  printf("Moyenne: %.2f\n", m);
}

int main()
{
  float a, b;
  recup(&a,&b);
  calcul(&a,&b);
  return(0);
}
