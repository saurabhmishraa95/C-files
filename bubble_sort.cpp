#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array\n";
	cin>>n;
	int array[n];
	cout<<"Enter array elements\n";
	for(int i=0;i<n;i++)
	cin>>array[i];
	
	for(int i=n-1;i>=0;i--)
	 for(int j=0;j<i;j++)
	 {
	 	if(array[j]>array[j+1])
	 	{
	 		int temp=array[j];
	 		array[j]=array[j+1];
	 		array[j+1]=temp;
		 }
	 }
	 cout<<"The sorted array is\n";
	 for(int i=0;i<n;i++)
	 cout<<array[i]<<" ";
	
	return 0;
	
}
