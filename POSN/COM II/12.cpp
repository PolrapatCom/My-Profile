#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <stack>
#include <algorithm>
using namespace std;
/*
Uses a nested loop to compare each price with subsequent prices.
Time complexity: O(n^2) due to nested loop.
*/
// vector<int> finalPrices1(vector<int> &prices)
// {
// }
/*
Utilizes a single loop and a stack to efficiently calculate discounts.
Time complexity: O(n) as it iterates through the prices array once.
*/
vector<int> finalPrices2(vector<int> &prices)
{   
    stack<int>st;
    int n = prices.size();
    vector<int>v(n,0);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && prices[i] < st.top()){
            st.pop();
        }   
        if(st.empty()){
            st.push(prices[i]);
            v[i]=st.top();
        }
        else{
            v[i]= prices[i] - st.top();
            st.push(prices[i]);
        }
    }
    return v;
}
void printOutput(const vector<int> &output)
{
    for (int val : output)
        cout << setw(3) << val << " ";
    cout << endl;
}
int main()
{
    srand(1234); // for reproducibility
    int maxCases = 10;
    int maxPriceValue = 20;
    int numPrices = 5;
    for (int i = 0; i < maxCases; ++i)
    {}
        vector<int> prices={12 ,20, 9, 14, 13, 16, 15, 4, 11, 19, 2, 18};
        // for (int j = 0; j < numPrices; ++j)
        //     prices.push_back(rand() % maxPriceValue + 1); // Random price values
        //     numPrices++;
        // Get results from your functions

        printOutput(prices);
        printOutput(finalPrices2(prices));
        // Print the answer
    
    
    return 0;
}