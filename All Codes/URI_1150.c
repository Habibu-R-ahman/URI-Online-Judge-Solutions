#include<stdio.h>
int main()
{
	int a,b,i=0,j=0;
	scanf("%d %d",&a, &b);
	while(b<=a){
		scanf("%d",&b);
	}
	while(j<=b){
		j+=a+i;
		i++;
	}
	printf("%d\n",i);
	return 0;
}
