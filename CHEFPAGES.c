#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d %d",&a, &b);
	if(a==1 && b==1)
	   printf("https://discuss.codechef.com");
	else if(a==1 && b==0)
	   printf("https://www.codechef.com/contests");
	else if(a==0 && b==0)
	   printf("https://www.codechef.com/practice");
	else if(a==0 && b==1)
	   printf("https://www.codechef.com/practice");
	return 0;
}

