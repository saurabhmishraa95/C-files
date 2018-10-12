#include<bits/stdc++.h>
using namespace std;
//series 0 0 2 1 4 2 6 3 8 4 10 5 12 6 .... Problem: To find the nth term in this series.
int main() {
	int n;
	cin>>n;
	
	if(n%2==0)
	cout<<(n-2)/2;
	else
	cout<<n-1;
	
    return 0;
}
