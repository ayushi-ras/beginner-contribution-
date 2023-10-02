#include <iostream>
#include <vector>

int maxSubarraySum(const std::vector<int>& arr) {
    int maxSum = arr[0];  // Initialize with the first element
    int currentSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = std::max(arr[i], currentSum + arr[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubarraySum(arr);
    std::cout << "Maximum Subarray Sum: " << result << std::endl;
    return 0;
}
