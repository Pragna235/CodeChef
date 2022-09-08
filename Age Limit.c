#include <stdio.h>

int main(void) {
	// your code goes here
	int T, X, Y, A,i=0;
	scanf("%d",&T);
	do{
	    scanf("%d %d %d",&X, &Y, &A);
	    if((A>=X) && (A<Y))
	        printf("YES");
	    else
	        printf("NO");
	    printf("\n");
	    i++;

	}while(i<T);
	return 0;
}
