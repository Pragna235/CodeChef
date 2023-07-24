#include <iostream>
using namespace std;

void solve(int n, char src, char dest, char temp){
    
    if(n==0) return ;
    solve(n-1,src,temp,dest);
    cout<<"Disk "<<n<<" moved from "<<src<<" to "<<dest<<endl;
    solve(n-1,temp,dest,src);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	solve(n,'A','C','B');
	return 0;
}
