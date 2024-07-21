#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int target)
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
 	 	 e=mid-1;
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

int totaloccurence(int arr[],int n,int target)
{
   int first=	firstoccurence(arr,n,target);
   int last=	lastoccurence(arr,n,target);
   int	total=last-first+1;
	return total;
}
    
int main()
 {
	int arr[]={10,20,25,30,30,30,30,80,90};
	int target=30;
	int n=9;
  int ans=totaloccurence(arr,n,target);
  cout<<"total no of occurence:"<<ans<<endl;
  
	
	return 0;
}
