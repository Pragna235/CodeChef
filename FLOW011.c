#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,sal;
	float hra, da, total;
	scanf("%d",&t);
	do{
	    scanf("%d",&sal);
	    if(sal<1500)
	    {
	        hra=0.1*(sal);
	        da=0.9*(sal);
	        total=sal+hra+da;
	        printf("%.2f\n",total);
	   }
	   else
	   {
	       hra=500;
	       da=0.98*(sal);
	       total=sal+hra+da;
	        printf("%.2f\n",total);
	   }
	   i++;
	    
	}while(i<t);
	return 0;
}

