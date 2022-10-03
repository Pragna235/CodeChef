#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=0,t,z,y,a,b,c;
	cin>>t;
	do{
	    cin>>z>>y>>a>>b>>c;
	    z=z-y;
	    if(z>=(a+b+c))
	       cout<<"YES"<<endl;
	    else
	       cout<<"NO"<<endl;
	    i++;
	}while(i<t);
	return 0;
}
