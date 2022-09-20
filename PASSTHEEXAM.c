#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);
	
	do{
	    scanf("%d %d %d",&a, &b, &c);
	    if(a>=10 && b>=10 && c>=10 && a+b+c>=100)
	       printf("PASS\n");
	    else
	       printf("FAIL\n");
	    i++;
	}while(i<t);
	return 0;
}

