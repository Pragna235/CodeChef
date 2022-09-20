#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i=0, x, y;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&x, &y);
	    if(x>=y)
	       printf("YES");
	    else
	       printf("NO");
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

