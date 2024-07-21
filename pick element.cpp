#include<iostream>
using namespace std;
int pickelement(int arr[],int n)
{
	int s=0;
	int e=n-1;
	int mid=(s+e)/2;
	while(s<e)
	{
	if(arr[mid]<arr[mid+1])
	{
		s=mid+1;
	}
	else if(arr[mid]>arr[mid+1])
	{
		e=mid;
	}
	mid=(s+e)/2;
  }
  return arr[mid];
}  

int main()
{
	int arr[]={10,20,50,40,30};
	int n=5;
	int ans=pickelement(arr,n);
	cout<<"pick element is:"<<ans<<endl;
	
	return 0;
}
