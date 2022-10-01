#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	scanf("%d",&t);
	do{
	    int c1=0,c2=0;
	   int arr[7];
	   for(int i=0;i<7;i++)
	   {
	       scanf("%d",&arr[i]);
	   }
	   for(int i=0;i<7;i++)
	   {
	      if(arr[i]==1)
	         c1++;
	      else
	         c2++;
	   }
	   if(c1>c2)
	      printf("YES\n");
	   else
	      printf("No\n");
	   i++;
	    
	}while(i<t);
	return 0;
}

