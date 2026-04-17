#include<stdio.h>
#include<math.h>
void recup(float *a,float *b,float *c);
void racine(float *a, float *b, float *c);
void calcul(float *a, float *b, float *c);

void recup(float *a,float *b,float *c)
{
  printf("Entrer a: ");
  scanf("%f", a);
  printf("Entrer b: ");
  scanf("%f", b);
  printf("Entrer c: ");
  scanf("%f", c);
}

void racine(float *a, float *b, float *c)
{
  float dlt,x,y,f,g,h;
  dlt=pow(*b,2)-4*(*a)*(*c);
  f=-(*b)/(2*(*a));
  g=sqrt(dlt)/(2*(*a));
  h=sqrt(-dlt)/(2*(*a));
  if(dlt>=0)
  {
    x=f-g;
    y=f+g;
    printf("x'= %.2f\nx''= %.2f\n",x,y);
  }
  else
  {
    if(*a>0)
    {
      printf("x'= %.2f-%.2fi\n",f,h);
      printf("x''= %.2f+%.2fi\n",f,h);
    }
    else if(*a<0)
    {
      printf("x'= %.2f+%.2fi\n",f,-h);
      printf("x''= %.2f-%.2fi\n",f,-h);
    }
  }
}

void calcul(float *a, float *b, float *c)
{
  if(*a==0 && *b!=0 && *c!=0)
  {
    float e;
    e=-((*c)/(*b));
    printf("C'est une équation première degré qui s'annulle aux point x=%.2f mais non deuxième degré\n", e );
  }
  else if(*a==0 && *b!=0 && *c==0)
  {
    printf("C'est une équation première degré qui s'annulle aux point x=0 mais non deuxième degré\n");
  }
  else if(*a==0 && *b==0 && *c!=0)
  {
    printf("Equation impossible\n");
  }
  else if(*a==0 && *b==0 && *c==0)
  {
    printf("Solution infinie\n");
  }
  else
  {
    racine(a,b,c);
  }
}

int main()
{
  printf("***Résolution d'une équation de deuxième degré***\n");
  float a, b, c;
  recup(&a,&b,&c);
  calcul(&a,&b,&c);
  return(0);
}



