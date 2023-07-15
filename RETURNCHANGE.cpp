#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if((x%10)>=5){
	        int y=abs(10-(x%10));
	        x=x+y;
	    }
	    else{
	        int y=x%10;
	        x=x-y;
	    }
	    printf("%d\n",100-x);
	    
	    
	}
	return 0;
}
