#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i=0,x;
	scanf("%d",&t);
	
	do{
	    scanf("%d",&x);
	    if(x>=1 && x<=4)
	       printf("YES");
	    else
	       printf("NO");
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

