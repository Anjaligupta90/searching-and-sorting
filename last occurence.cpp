#include<iostream>
using namespace std;
 int lastoccurence(int arr[],int n,int target)
 {
 	int s=0;
 	int e=n-1;
 	int mid=(s+e)/2;
 	int store=-1;
 	
 	while(s<=e)
 	{
 	 if(arr[mid]==target)
 	 {
 	  store=mid;
 	 	 s=mid+1;
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
    return store;
}
    
int main()
 {
	int arr[]={10,20,25,30,30,60,70,80,90};
	int target=30;
	int n=9;
	int ans=lastoccurence(arr,n,target);
	if(ans==-1)
	{
		cout<<"not found"<<endl;
	}
	else{
	cout<<"1st accourence is:"<<ans<<endl;	
	}
	
	return 0;
}
