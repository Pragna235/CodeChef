#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	float a,b,c;
	scanf("%d",&t);
	do{
	    scanf("%f %f %f",&a, &b, &c);
	    if(((a+b)/2 <35) || ((b+c)/2 <35) || ((c+a)/2 <35))
	       printf("Fail\n");
	    else
	       printf("Pass\n");
	    i++;
	       
	}while(i<t);
	return 0;
}

