#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
	
}

int main()
{
	int a=10,b=8;
	swap(a,b);
	cout<<a<<"  "<<b;
	return 0;
}
