 #include <bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin >> n;
    int y[n];
    for(int i=0;i<n;i++){
        cin >> y[i];
    }
    int left = 0,leftmax = y[0];
    int right = n-1,rightmax = y[n-1];
    int sum = 0;
    while(left<=right){
        if(leftmax < rightmax){
            if(leftmax>y[left]){
                sum += leftmax - y[left];
            }
            else{
                leftmax = max(leftmax,y[left]);
            }
            left++;
        }
        else{
            if(rightmax>y[right]){
                sum += rightmax -y[right];
            }
            else{
                rightmax = max(rightmax,y[right]);
            }
            right--;
        }
    }
    cout << sum;
    return 0;
 }