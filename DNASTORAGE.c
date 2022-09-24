#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t,n;
	scanf("%d",&t);
	do{
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    for(int i=0;i<n;i=i+2)
	    {
	        if(s[i]=='0' && s[i+1]=='0')
	           printf("A");
	        else if(s[i]=='0' && s[i+1]=='1')
	           printf("T");
	        else if(s[i]=='1' && s[i+1]=='0')
	           printf("C");
	        else if(s[i]=='1' && s[i+1]=='1')
	           printf("G");
	    }
	    printf("\n");
	    i++;
	}while(i<t);
	return 0;
}

