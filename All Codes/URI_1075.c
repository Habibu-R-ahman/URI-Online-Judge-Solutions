#include <stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	if(N<10000)
	{
		for(i=1;i<=10000;i++)
		{
			if(i%N==2)
				printf("%d\n",i);
		}
	}
	return 0;
}