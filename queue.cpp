#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int a[10];
int front=0;
int end=-1;
void enque(int x)
{
	end++;
	a[end]=x;
}

int dequ()
{
	int x=a[front];
	front++;
	return x;
}

int main()
{
	int x;
	for(int i=0;i<3;i++)
	{
		cin>>x;
		enque(x);
	}
	for(int i=0;i<3;i++)
	cout<<dequ()<<"\n";

	return 0;
}
