#include<stdio.h>
int main()
{
	int a,b,i,j=0;
	scanf("%d %d", &a, &b);
	while(b<=0){
		scanf("%d",&b);
	}
	for(i=0; i<b; i++){
		j+=a+i;
	}
	printf("%d\n",j);
}
