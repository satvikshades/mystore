#include <stdio.h>
int main()
{
  float units,charge,total;
  char name[20];
  printf("enter the name:\n");
  scanf("%s",&name);
  printf("enter the units:\n");
  scanf("%f",&units);
  if(units<0)
  {
    printf("the input is invalid");
    return 1;
  }
  else if(units<=200)
  {
    charge= units*0.8;
  }
  else if(units <= 300)
  {
    charge= 200*0.8 + (units-200)*0.90;
  }
  else
  {
    charge= 200*0.8+ 100*0.9 + (units-300)*1;
  }
  total= charge+100;
  if(total>400)
  {
    total=total+(0.15*total);
  }
  printf("name\tunits consumes\tbill amount\n");
  printf("%s\t%f\t%f\n",name,units,total);
  return 0;
 }