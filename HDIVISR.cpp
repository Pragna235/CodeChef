#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i=1,m;
	cin>>n;
	while(i<=10)
	{
	    if(n%i==0)
	         m=i;
	    i++;
	}
	cout<<m;
	return 0;
}
