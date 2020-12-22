#include<iostream>
using namespace std;
int main()
{
	int n,i,k,count,z=0,min=99999;
	cin>>n;
	cout<<"Day n: ";
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(k!=i)
			{
				if(arr[i]<=arr[k])
				min=arr[i];
				
				if(arr[i]>arr[k])
				min=arr[k];
				
				arr1[z]=min;
				z++;
				
			};
			
			
		}
	}
	
	for(i=0;i<n;i++)
	cout<<arr1[i]<<" ";
	return 0;
}
