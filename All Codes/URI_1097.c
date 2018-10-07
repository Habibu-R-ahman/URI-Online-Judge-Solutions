#include <stdio.h>

int main(){
    int i,j,k;

    for (i=1,j=7; i<10; i+=2,j+=2){
		
		for (k=j; k>=(j-2); k--){
			
			printf("I=%d J=%d\n", i, k);
		}
	}
	
    return 0;
}
