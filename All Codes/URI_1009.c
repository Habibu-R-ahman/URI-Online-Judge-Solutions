#include <stdio.h>

int main()
{
  double salary,value;
  
  //%*s will ignore string
  scanf("%*s %lf %lf",&salary, &value);
  printf("TOTAL = R$ %.2lf\n",salary+value*.15);

  return 0;	
}
