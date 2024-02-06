#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n!=0){
	    int a,b,c,d,K;
	    cin>>a>>b>>c>>d>>K;
	    int x=abs(d-b)+abs(c-a);
	    if(x==K){
	        cout<<"YES"<<endl;
	    }
	    else{
	        int count=K-x;
	        if(count%2==0&&count>0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    n--;
	}
}
