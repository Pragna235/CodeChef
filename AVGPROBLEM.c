#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	float a,b,c,avg;
	scanf("%d",&t);
	
	do{
	    scanf("%f %f %f",&a, &b, &c);
	    
	   avg=(a+b)/2;
	   if(avg>c)
	      printf("YES\n");
	   else
	      printf("NO\n");
	   
	    i++;
	}while(i<t);
	return 0;
}

