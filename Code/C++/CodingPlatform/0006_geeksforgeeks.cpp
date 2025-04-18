#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > twoSum(vector<int>& arr, int target, int N)
{	vector<pair<int,int> >v;
	int i,j,a=0;
	int n = N;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				v.push_back({arr[i],arr[j]});
				arr.erase(arr.begin()+j);
				arr.erase(arr.begin()+i);
				n=v.size();
				i=0,j=0,a=1;
			}
		}
	}
	if(a==0)v.push_back({-1, -1});
        return v; 
}

int main(){
	vector<int>arr = {1,-1,-1, 2,2};
	int target = 1,N=5;
	for(auto i : twoSum(arr,target,N)){
		cout << i* << endl;
	}
}

