#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i=0, w,x,y,z,total;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d %d",&w, &x, &y, &z);
	    total=w+((x-y)*z);
	    printf("%d",total);
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

