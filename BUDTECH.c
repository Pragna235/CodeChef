#include <stdio.h>

int main(void) {
	// your code goes here
	int t,r;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&r);
	    r=(r*1000)/2;
	    printf("%d\n",r/5);
	}
	return 0;
}

