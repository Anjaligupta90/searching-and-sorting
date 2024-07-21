#include<iostream>
using namespace std;
 int binarysearch(int arr[],int n,int target)
 {
 	int s=0;
 	int e=n-1;
 	int mid=(s+e)/2;
 	while(s<=e)
 	{
 	 if(arr[mid]=target)
 	 {
 	 	return mid;
	  }
	  else if(arr[mid]<target)
	  {
	  	s=mid+1;
	  }
	  else if(arr[mid]>target)
	  {
	  	e=mid-1;
	  }
   	 mid=(s+e)/2;
   }
 	return -1;
 }


int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};
	int target=90;
	int n=9;
	
	int ansindex= binarysearch(arr,n,target);
	
	if(ansindex==-1)
	{
		cout<<"not found"<<endl;
	}
	else{
		cout<<"element found"<<ansindex<<endl;
	}
	
	return 0;
}
