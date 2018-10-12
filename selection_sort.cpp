#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,min;
	cout<<"Enter array size\n";
	cin>>n;
	int array[n];
	cout<<"Enter array elements\n";
	for(int i=0;i<n;i++)
	cin>>array[i];
	cout<<"The sorted array is\n";
	
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(array[j]<array[min])
			 min=j;
		}
		//swap
		int temp=array[min];
		array[min]=array[i];
		array[i]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<array[i]<<" ";
	
	return 0;
}
