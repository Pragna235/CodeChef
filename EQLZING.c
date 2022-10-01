#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &y);
	    if((x%2==0 && y%2==0) || (x%2!=0 && y%2!=0))
	       printf("YEs\n");
	    else 
	       printf("NO\n");
	    i++;
	}while(i<t);
	
	return 0;
}

