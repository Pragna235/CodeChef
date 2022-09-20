#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &y);
	    if((x*100)<(y*10))
	    {
	        printf("Disposable\n");
	    }
	    else
	    {
	        printf("Cloth\n");
	    }
	    i++;
	}while(i<t);
	return 0;
}

