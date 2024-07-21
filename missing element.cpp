#include<iostream>
using namespace std;
int missingelement(int arr[],int n)
{
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  int store=-1;
  while(s<=e)
  {
  	int diff=arr[mid]-mid;
  	if(diff==1)
  	{
  		s=mid+1;
	  }
	  else{
	  	store=mid;
	  	e=mid-1;
	  }
	  mid=(s+e)/2;
	} 
	if(store+1==0)
	return n+1;
	else
	return store+1;
	
}


int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int n=8;
	
	int ans=missingelement(arr,n);
	cout<<"missing element is:"<<ans<<endl;
	

	
	return 0;
}
