#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int y[x];
    for(int i=0;i<x;i++){
        cin >> y[i];
    }
    int left = 0;
    int right = x-1;
    int leftmax = y[left];
    int rightmax = y[right];
    int maxi = 0;
    while(left < right){
        if(leftmax < rightmax){
            maxi = max(maxi,(right - left)*(min(y[left],y[right])));
            left++;
            leftmax = max(leftmax,y[left]);
        }
        else{
            maxi = max(maxi,(right - left)*(min(y[left],y[right])));
            right--;
            rightmax = max(rightmax,y[right]);
        }
    }
    cout << maxi;
}