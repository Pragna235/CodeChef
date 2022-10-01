#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,a,b;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&a, &b);
	    if(a+b<3)
	       printf("1\n");
	    else if(a+b>=3 && a+b<=10)
	       printf("2\n");
	    else if(a+b>=11 && a+b<=60)
	       printf("3\n");
	    else if(a+b>60)
	       printf("4\n");
	    i++;
	}while(i<t);
	return 0;
}

