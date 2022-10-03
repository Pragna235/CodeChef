#include <stdio.h>

int main(void) {
	// your code goes here
	int l,b,area,peri;
	scanf("%d",&l);
	scanf("%d",&b);
	area=l*b;
	peri=2*(l+b);
	if(area>peri)
	   {
	       printf("Area\n");
	       printf("%d\n",area);
	   }
	else if(area==peri)
	   {
	       printf("Eq\n");
	       printf("%d\n",area);
	   }
	else
	   {
	       printf("Peri\n");
	       printf("%d\n",peri);
	   }
	
	  
	return 0;
}

