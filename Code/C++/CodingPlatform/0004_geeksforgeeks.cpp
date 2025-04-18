#include <bits/stdc++.h>
using namespace std;

int main(){
	 int l,r;
	 int n=10,arr[]={1, 1, 5, 2, 7, 6, 1, 4, 2, 3};
        for(int i=0;1+i<n;i++){
            if(arr[i]>arr[1+i]){
                l=i+1; break;
            }
        }
        for(int i=n-1;i-1>-1;i--){
            if(arr[i]>arr[i-1]){
                r=i-1; break;
            }
        }
        const int mini = arr[l-1] < arr[r+1] ? arr[l-1] : arr[r+1];
        int sum=0,cnt=0;
        while(555){
            if(cnt==mini) {	cout << sum; return 0;		}
            for(int i=l;i<=r;i++){
                if(arr[i]==cnt){
                    arr[i]++;
                    sum++;
                }
            }
            cnt++;
        }
}
