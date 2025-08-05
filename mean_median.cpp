#include <vector>
#include <algorithm> // for sort

double median(std::vector<int> nums) {
    if (nums.empty()) return 0.0;

    std::sort(nums.begin(), nums.end());
    int n = nums.size();

    if (n % 2 == 0)
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    else
        return nums[n / 2];
}
