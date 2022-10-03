#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=0,t,x;
	cin>>t;
	do{
	    cin>>x;
	    if(x>=1 && x<100)
	       cout<<"Easy"<<endl;
	    else if(x>=100 && x<200)
	       cout<<"Medium"<<endl;
	    else if(x>=200 && x<=300)
	       cout<<"Hard"<<endl;
	    i++;
	}while(i<t);
	return 0;
}
