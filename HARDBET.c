#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b,c;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&a, &b, &c);
	    if(a<=b && a<=c)
	       printf("Draw\n");
	    else if(b<=a && b<=c)
	       printf("BOB\n");
	    else if(c<=a && c<=b)
	       printf("ALICE\n");
	    i++;
	}while(i<t);
	return 0;
}

