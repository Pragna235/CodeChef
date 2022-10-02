#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &y);
	   
	   if(y>x)
	      printf("%d\n",y-x);
	   else if(x>y && (x-y)%2==0)
	      printf("%d\n",(x-y)/2);
	   else if(x>y && (x-y)%2!=0)
	      printf("%d\n",((x-y)/2)+2);
	   else
	      printf("0\n");
	    i++;
	}while(i<t);
	return 0;
}

