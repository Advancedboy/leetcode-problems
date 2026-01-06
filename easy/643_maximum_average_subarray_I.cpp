#include<iostream>
#include<vector>
#include<algorithm>

double findMaxAverage(std::vector<int>& nums, int k) {
    int sum = 0;

    for (auto i = 0; i < k; i++) {
        sum += nums[i];
    }
    
    int maxSum = sum;

    for (int i = k; i < nums.size(); ++i) {
        sum +=  nums[i];
        sum -= nums[i - k];
        maxSum = std::max(maxSum, sum);
    }
    
    return (double)maxSum / k;
}

int main() {
   std::vector<int> test1 = { 1,12,-5,-6,50,3 };
   std::vector<int> test2 = {5};
   std::cout << findMaxAverage(test1, 4) << std::endl; 
   std::cout << findMaxAverage(test2, 1) << std::endl; 
}