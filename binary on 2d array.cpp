#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>&matrix,int target)
{
	int row=matrix.size();
	int col=matrix[0].size();
	int n=row*col;
	
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	while(s<=e){
		int rowindex=mid/col;
		int colindex=mid%col;
		int currentnum=matrix[rowindex][cilindex];
		
		if(currentnum==target)
		return true;
		else if(target>currentnum)
		{
			s=mid+1;
		  } 
		  mid=s+(e-s)/2; 
	}
	return false;
	
}

int main()
{ 
int trget=5; 
vector<vector<int> > matrix;

vector<int> vec1(10,0);
vector<int> vec2 (5,1);
vector<int> vec3(7,0);
vector<int> vec4(8,1);

matrix.push_back(vec1);
matrix.push_back(vec2);
matrix.push_back(vec3);
matrix.push_back(vec4);

for(int i=0;i<matrix.size();i++)
{
		for(int j=0;j<matrix[i].size();j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int ans=searchmatrix(matrix,target);
	cout<<ans;
	
	
	return 0;
}
