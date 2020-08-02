#include <stdio.h>
int main()
{
	int i,N;
	int a[7]={100,50,20,10,5,2,1};
	int temp;

	scanf("%d",&N);
	printf("%d\n",N);

	for(i=0; i<7; i++){
		temp = N / a[i];
		N = N % a[i];
	    printf("%d nota(s) de R$ %d,00\n", temp, a[i]);
	}
	
    return 0;
}
