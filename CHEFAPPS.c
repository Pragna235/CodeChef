#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,s,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d %d",&s, &x, &y,&z);
	    if(z<=(s-(x+y)))
	       printf("0\n");
	    else
	       {
	           z=z-(s-(x+y));
	           if(z<=x || z<=y)
	               printf("1\n");
	           else
	               printf("2\n");
	       }
	    i++;
	       
	}while(i<t);
	return 0;
}

