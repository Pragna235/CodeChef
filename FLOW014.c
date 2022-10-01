#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,h,ts;
	scanf("%d",&t);
	float c;
	do{
	    scanf("%d %f %d",&h, &c, &ts);
	    if(h>50 && c<0.7 && ts>5600)
	       printf("10\n");
	    else if(h>50 && c<0.7 && ts<=5600)
	       printf("9\n");
	    else if(h<=50 && c<0.7 && ts>5600)
	       printf("8\n");
	    else if(h>50 && c>0.7 && ts>5600)
	       printf("7\n");
	    else if((h>50 && c>0.7 && h<=5600) || (h<=50 && c<0.7 && ts<=5600) || (h<=50 && c>=0.7 && ts>5600))
	       printf("6\n");
	    else if(h<=50 && c>0.7 && ts<=5600)
	       printf("5\n");
	    i++;
	}while(i<t);
	return 0;
}

