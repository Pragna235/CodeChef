#include <stdio.h>

int main(void) {
	// your code goes here
	int t,g,b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&g,&b);
	    printf("%d\n",b-g);
	}
	return 0;
}

