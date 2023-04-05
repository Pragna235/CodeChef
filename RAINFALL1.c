#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(x<3)
	    printf("LIGHT\n");
	    else if(x<7)
	    printf("MODERATE\n");
	    else
	    printf("HEAVY\n");
	}
	return 0;
}

