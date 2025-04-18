#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
/* Use Map */
vector<vector<int>> findDifference1(vector<int> &nums1, vector<int> &nums2)
{
    map<int,int>mp1;
    map<int,int>mp2;
    vector<int>v1;
    vector<int>v2;
    int n = nums1.size();
    int m = nums2.size();
    for(int i=0;i<n;i++){
        mp1[nums1[i]]++;
    }
    for(int i=0;i<m;i++){
        mp2[nums2[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp1[nums1[i]]>0 && mp2[nums1[i]]==0){
            v1.push_back(nums1[i]);
            mp1[nums1[i]] = 0;
        }
    }
    for(int i=0;i<m;i++){
        if(mp2[nums2[i]]>0 && mp1[nums2[i]]==0){
            v2.push_back(nums2[i]);
            mp2[nums1[i]] = 0;
        }
    }
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    return v;
}
/* Use Unordered Map */
vector<vector<int>> findDifference2(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    vector<int>v1;
    vector<int>v2;
    int n = nums1.size();
    int m = nums2.size();
    for(int i=0;i<n;i++){
        mp1[nums1[i]]++;
    }
    for(int i=0;i<m;i++){
        mp2[nums2[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp1[nums1[i]]>0 && mp2[nums1[i]]==0){
            v1.push_back(nums1[i]);
            mp1[nums1[i]] = 0;
        }
    }
    for(int i=0;i<m;i++){
        if(mp2[nums2[i]]>0 && mp1[nums2[i]]==0){
            v2.push_back(nums2[i]);
            mp2[nums2[i]] = 0;
        }
    }
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    return v;
}
int main()
{
    // Test cases
    vector<pair<vector<int>, vector<int>>> testCases = {
        {{1, 2, 3, 4, 5}, {4, 5, 6, 7, 8}},
        {{1, 2, 3, 4, 5}, {5, 6, 7, 8, 9}},
        {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}},
        {{1, 2, 3}, {4, 5, 6}},
        {{1, 2, 3}, {1, 2, 3}},
        {{1, 2, 3, 4}, {1, 2, 3, 4}},
        {{1, 2, 3, 4}, {5, 6, 7, 8}},
        {{5, 5, 5, 5}, {1, 1, 1, 1}},
        {{5, 6, 7, 8}, {5, 6, 7, 8}},
        {{9, 9, 9, 9}, {1, 2, 3, 4}}};
    for (int i = 0; i < testCases.size(); ++i)
    {
        cout << "Test Case " << i + 1 << ":";
        cout << endl;
        vector<int> nums1 = testCases[i].first;
        vector<int> nums2 = testCases[i].second;
        vector<vector<int>> result = findDifference2(nums1, nums2);
        int n = result[0].size();
        int m = result[1].size();
        for(int i=0;i<n;i++){
            cout << result[0][i] << " ";
        }
        cout << endl;
        for(int i=0;i<m;i++){
            cout << result[1][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
/* Output should look like this:
Test Case 1: [ 1 2 3 ] [ 6 7 8 ]
Test Case 2: [ 1 2 3 4 ] [ 6 7 8 9 ]
Test Case 3: [ ] [ ]
Test Case 4: [ 1 2 3 ] [ 4 5 6 ]
Test Case 5: [ ] [ ]
Test Case 6: [ ] [ ]
Test Case 7: [ 1 2 3 4 ] [ 5 6 7 8 ]
Test Case 8: [ 5 ] [ 1 ]
Test Case 9: [ ] [ ]
Test Case 10: [ 9 ] [ 1 2 3 4 ]
*/