#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int array[n];
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<n;i++)
	cin>>array[i];
	
	for(int i=1;i<n;i++)
	{
		int v=array[i];
		int j=i;
		while( array[j-1]>v && j>0 )
		{
			array[j]=array[j-1];
			j--;
		}
		array[j]=v;
	}
	
	for(int i=0;i<n;i++)
	cout<<array[i]<<" ";
	
	return 0;
}
