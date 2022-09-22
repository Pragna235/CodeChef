#include <stdio.h>

int main(void) {
	// your code goes here
	long int t;
	scanf("%ld",&t);
	while(t--){
	    long int a,b;
	    scanf("%ld  %ld",&a,&b);
	    if(a%2!=0 && b%2!=0)
	    printf("no\n");
	    else if(a==1||b==1)
	    printf("no\n");
	    else 
	    printf("yes\n");
	}
	return 0;
}
