#include <iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s <= e) {
            //corner case
            if(s == e) {
                //single element
                return s;
            }

            if(arr[mid] > arr[mid+1])
                return mid;
                
                //yaha savi condition ka dhyan rakhe
                
            else if(mid-1>=0&&arr[mid] < arr[mid-1])
                return mid-1;
            else if(arr[s] > arr[mid] ) 
                e = mid - 1;
            else 
                s = mid + 1;
            
            mid = s + (e-s)/2;
        }
        return -1;

    }
    // binary search
    
    int binarysearch(vector<int>&arr,int target,int s,int e)
    {
    	int mid=s+(e-s)/2;
    	 while(s<=e)
    	 {
    	 	if(arr[mid]==target)
    	 	{
    	 		return mid;
			 }
			 if(target>arr[mid]){
			 	s=mid+1;
			 }
			 else{
			 	e=mid-1;
			 }
			 mid=s+(e-s)/2;
		 }
		 return -1;
	}
    
    int search(vector<int>&arr,int target)
    {
    	int pivotIndex = findPivotIndex(arr);
    	int n=arr.size();
    	int ans=-1;
    	
    	if(target>=arr[0]&& target<= arr[pivotIndex])
    	{
    	 ans =binarysearch(arr,0,pivotIndex,target);  	
		}
		else{
			ans=binarysearch(arr,pivotIndex+1,n-1,target);
		}
		return ans;

	}


int main() {
  vector<int> v;


  v.push_back(2);
  v.push_back(4);
  v.push_back(6);
  v.push_back(8);
  v.push_back(10);

  int pivotIndex = findPivotIndex(v);
  cout << "Pivot Index is: " << pivotIndex << endl;
  
  return 0;
}

