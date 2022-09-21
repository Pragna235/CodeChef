#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,c1=0,c2=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	
	
	    if(arr[i]%2==0)
	       c1++;
	       
	    else
	       c2++;
	}     
	
	if(c1<=c2)
	   printf(" NOT READY\n");
	else
	   printf("READY FOR BATTLE\n");

	return 0;
}

