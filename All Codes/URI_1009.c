#include<stdio.h>
int main()
{
  double salary,value;
  char name;
  scanf("%s %lf %lf",&name, &salary, &value);
  printf("TOTAL = R$ %.2lf\n",salary+value*.15);
  return 0;	
}
