#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=0,t;
	long int n;
	cin>>t;
	do{
	    cin>>n;
	    if(n==1 || n==3 || n==5)
	       cout<<"NO"<<endl;
	    else
	       cout<<"YES"<<endl;
	           
	       
	    i++;
	}while(i<t);
	return 0;
}
