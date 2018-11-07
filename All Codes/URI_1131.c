#include <stdio.h>

int main() {
	
	int a,b,c,aa=0,bb=0,cc=1,d=0;
	x:
	scanf("%d %d",&a,&b);
	
	if (a>b)
		aa++;
	else if (a<b)
		bb++;
	else if(a==b)
		d++;
		
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d",&c);
	
	if (c == 1) {
		cc++;
		goto x;
	}
	else {
		
		printf("%d grenais\n",cc);
		printf("Inter:%d\n",aa);
		printf("Gremio:%d\n",bb);
		printf("Empates:%d\n",d);
		
		if (aa > bb) 
			printf("Inter venceu mais\n");
		else if (aa < bb)
			printf("Gremio venceu mais\n");
		else
			printf("Não houve vencedor\n");
		
		return 0;
	}
}
