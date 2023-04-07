#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	do{
	    scanf("%d %d %d",&x,&y,&z);
	    int pass=10*x;
	    if(y<=pass)
	    printf("%d\n",y*z);
	    else
	    printf("%d\n",pass*z);
	    i++;
	}while(i<t);
	return 0;
}

