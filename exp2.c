#include <stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,r1,r2,imag_part,real_part;
  printf("enter the coefficients of a quadratic equations:");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
  {
    printf("the equation is not quadratic");
    return 1;
  }
  else
  {
    printf("the given equation is quadratic\n");
    d=(b*b)-(4*a*c);
  }
  if(d>0)
  {
    printf("the roots are real and distinct\n");
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("root1= %f and root2= %f",r1,r2);
  }
  else if(d==0)
  {
    printf("the roots are same and equal\n");
    r1=(-b/(2*a));
    r2=(-b/(2*a));
    printf("root1= %f and root2= %f",r1,r2);
  }
  else
  {
    printf("the roots are not real and the roots are imaginary\n");
    real_part= -b/(2*a);
    imag_part= sqrt(-d)/(2*a);
    printf("root1= %f+ %f i\n",real_part,imag_part);
    printf("root2= %f- %f i\n",real_part,imag_part);
    return 0;
  }
}
