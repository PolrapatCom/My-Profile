#include <vector>

int minimumRateToEatBananas(std::vector<int> v, int h) {
    int n = v.size();
    for (int j = 1; j < 1e6; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (v[i] / j);
        }
        if (sum == h)
            return j;
        else if (sum < h)
            return j + 1;
    }
    return -1;
}

// Example usage
#include <iostream>
int main() {
    int arr[] = {25, 12, 8, 14, 19};
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int h = 5;
    std::cout << "Minimum rate to eat bananas: " << minimumRateToEatBananas(v, h) << std::endl;
    return 0;
}
