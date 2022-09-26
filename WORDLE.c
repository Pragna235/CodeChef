#include <stdio.h>

int main(void) {
	// your code goes here
	int i=0,t;
	scanf("%d",&t);
	do{
	    char s[5],t[5],m[5];
	    scanf("%s",s);
	    scanf("%s",t);
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]==t[i])
	           m[i]='G';
	        else
	           m[i]='B';
	    }
	    printf("%s\n",m);
	    i++;
	}while(i<t);
	return 0;
}

