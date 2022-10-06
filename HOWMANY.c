#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,count=0,rem;
	scanf("%d",&n);
	while(n!=0)
	{
	    rem=n%10;
	    count++;
	    n=n/10;
	}
	if(count==1)
	   printf("1");
	else if(count==2)
	   printf("2");
	else if (count==3)
	   printf("3");
	else if(count>3)
	   printf("More than 3 digits");
	return 0;
}

