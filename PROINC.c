#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&y);
	    z=x-y;
	    printf("%d\n",(x+(x/10))-z);
	}
	return 0;
}

