#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	
	int one_pair = a + b + (a*b);
	if(one_pair==111)
	{
	    printf("YES\n");
	}
	else
	printf("NO");
	
	return 0;
}

