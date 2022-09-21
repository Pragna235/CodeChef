#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,z;
	scanf("%d",&t);
	 do{
	     scanf("%d %d %d",&x, &y, &z);
	     if(x+y<=z)
	        printf("2\n");
	     else if(x>z)
	        printf("0\n");
	     else if(x<=z && x+y>z)
	        printf("1\n");
	     i++;
	 }while(i<t);
	return 0;
}

