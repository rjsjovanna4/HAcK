#include <vector>
#include <numeric> // for accumulate
#include <algorithm> // for sort
#include <iostream>

double mean(const std::vector<int>& nums) {
    if (nums.empty()) return 0.0;
    return static_cast<double>(std::accumulate(nums.begin(), nums.end(), 0)) / nums.size();
}

double median(std::vector<int> nums) {
    if (nums.empty()) return 0.0;
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n % 2 == 0)
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    else
        return nums[n / 2];
}

int main() {
    std::vector<int> v = {1, 3, 5, 7, 9};
    std::cout << "Mean: " << mean(v) << std::endl;
    std::cout << "Median: " << median(v) << std::endl;
    return 0;
}
