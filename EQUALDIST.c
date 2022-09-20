#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d",&a, &b);
	    a=a+b;
	    if(a%2==0)
	       printf("YES");
	    else
	       printf("NO");
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

