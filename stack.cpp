#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int a[10];
int top=-1;

void push(int x)
{
	if(top>=10)
	  cout<<"Overflow";
	else{
	top++;
	a[top]=x;
}
}

int pop()
{
	if(top<0)
	  cout<<"Underflow";
	else{
	int x=a[top];
	top--;
	return x;
}
}

int main() {
push(5);
push(6);
push(33);
for(int i=0;i<3;i++)
cout<<pop()<<"\n";
return 0;
}
