#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    x=x*4;
	    if(x<=1000){
	        printf("YES\n");
	       
	    }
	    else{
	        printf("NO\n");
	    }
	}
	
	
	
	
	return 0;
}

