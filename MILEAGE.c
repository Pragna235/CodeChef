#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	float n,x,y,a,b,petrol,diesel;
	scanf("%d",&t);
	do{
	    scanf("%f %f %f %f %f",&n, &x, &y, &a, &b);
	    petrol=(n/a)*x;
	    diesel=(n/b)*y;
	    if(petrol<diesel)
	       printf("PETROL\n");
	    else if(petrol==diesel)
	       printf("ANY\n");
	    else
	    
	       printf("DIESEL\n");
	    i++;
	}while(i<t);
	
	
	return 0;
}

