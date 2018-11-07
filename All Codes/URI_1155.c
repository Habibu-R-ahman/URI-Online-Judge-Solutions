#include<stdio.h>
int main()
{
	float a=1.0, b=0;
	int i;
	for(i=1; i<101; i++){
		b+=(a/i);
	}
	printf("%.2f\n",b);
	return 0;
}
