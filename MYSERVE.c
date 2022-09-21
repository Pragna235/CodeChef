#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,p,q;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&p,&q);
	   if(((p+q)/2)%2==0)
	      printf("ALICE\n");
	   else
	      printf("BOB\n");
	     
	      
	    
	    i++;
	}while(i<t);
	return 0;
}

