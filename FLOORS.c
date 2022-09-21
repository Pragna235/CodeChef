#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,x,y,chef,chefina;
	scanf("%d",&t);
	do{
	    scanf("%d %d",&x, &y);
	    if(x%10==0)
	       chef=x/10;
	    else
	       chef=(x/10)+1;
	    if(y%10==0)
	       chefina=y/10;
	    else
	       chefina=(y/10)+1;
	 
	    printf("%d\n",(abs(chef-chefina)));
	    i++;
	    
	}while(i<t);
	return 0;
}

