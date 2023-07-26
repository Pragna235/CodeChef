#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int a=min(x,y);
	    int b=max(x,y);
	    int count=0;
	    while(a<b)
	    {
	        a++;
	        b--;
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}