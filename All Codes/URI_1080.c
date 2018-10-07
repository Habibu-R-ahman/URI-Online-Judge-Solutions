#include <stdio.h>

int main()
{
    int i,input,max=0,position;
    
    for(i=1; i<=100; i++){
        scanf("%d",&input);
        
        if(max<input){
            max = input;
            position = i;
        }
    }
    printf("%d\n%d\n",max,position);
    
    return 0;
}
