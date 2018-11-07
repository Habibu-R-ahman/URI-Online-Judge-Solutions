#include<stdio.h>
int main()
{
	int a,b,n,i,j,k=0,s=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d %d",&a,&b);
		for(j=a; k<b ;j++){
			if(j%2!=0){
				s=s+j;
				k++;
			}
		}
		printf("%d\n",s);
		k=0;
		s=0;
	}
	return 0;
}
