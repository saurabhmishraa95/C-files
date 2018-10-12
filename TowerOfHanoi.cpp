#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void toh(int x,string first,string aux,string last)
{
	if(x==1)
	{
		cout<<"Move from "<<first<<" to "<<last<<"\n";
	}
	else
	{
		toh(x-1,first,last,aux);
		cout<<"Move from "<<first<<" to "<<last<<"\n";
		toh(x-1,aux,first,last);
	}
	
}

int main()
{
	int x;
	string first("first"),last("last"),aux("aux");
	cin>>x;
	toh(x,first,aux,last);
	return 0;
}
