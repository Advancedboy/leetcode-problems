#include<iostream>
#include<vector>

void moveZeroes(std::vector<int>& nums) {
    int l=0, r=0;
    for(r = 0; r <= nums.size() ; ++r) {
       if(nums[r]!=0) {
        std::swap(nums[r], nums[l]);
        l++;
       } 
    } 
    for(auto num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
   std::vector test = {0, 1, 0, 3, 12};
   std::vector test1 = {0};
   std::vector test2 = {1, 3, 0, 0, 12};
   moveZeroes(test); 
   moveZeroes(test1); 
   moveZeroes(test2); 
}