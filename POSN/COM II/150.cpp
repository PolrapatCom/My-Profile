#include <bits/stdc++.h>
using namespace std;

int r1,b1,g1,n1,ans;
int dp[51][51][51][4];


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> r1 >> b1 >> g1;
    dp[1][0][0][0] = 1;
    dp[0][1][0][1] = 1;
    dp[0][0][1][2] = 1; 
    for(int i=0; i<=50; i++) {
        for(int j=0; j<=50; j++) {
            for(int k=0; k<=50; k++) {
                if(i) dp[i][j][k][0] += dp[i-1][j][k][1] + dp[i-1][j][k][2];
                if(j) dp[i][j][k][1] += dp[i][j-1][k][0] + dp[i][j-1][k][2];
                if(k) dp[i][j][k][2] += dp[i][j][k-1][0] + dp[i][j][k-1][1];
                // cout << dp[i][j][k][0] << " " << dp[i][j][k][1] << " " << dp[i][j][k][2] << "\n";
            }
        }
    }
    cout << dp[r1][b1][g1][0] + dp[r1][b1][g1][1] + dp[r1][b1][g1][2];
    return 0;
}