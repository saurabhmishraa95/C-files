#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int temp[13];

void combine(int ar[],int low,int mid,int high)
{
	int k,i,j;
	k=low;
	i=low;
	j=mid+1;
	
	while(i<=mid&&j<=high)
	{
	
	if(ar[i]<=ar[j])
	{
	 	temp[k]=ar[i];
	 	i++;
	 	k++;	 	
		 }
    else
	{
 	    temp[k]=ar[j];			 	 
	 	j++;
	 	k++; 	
	     }	
	
	}
	
	while(i<=mid)
	{
		temp[k]=ar[i];
	 	i++;
	 	k++;		
}

    while(j<=high)
    {
    	temp[k]=ar[j];
		j++;
		k++;
			}
			
    for(int m=low;m<=high;m++)
     ar[m]=temp[m];
	
}
void mergesort(int ar[],int low,int high){
	if(low<high){
	int mid=(low+(high-1))/2;
	mergesort(ar,low,mid);
	mergesort(ar,mid+1,high);	
	combine(ar,low,mid,high);

}
}


int main()
{
	
	int low=0,high=12;
	int ar[13]={5,2,55,3,11,6,75,11,122,775,44,32,22};
	mergesort(ar,low,high);
	for(int i=0;i<13;i++)
	cout<<ar[i]<<"  ";
	
	return 0;
}

