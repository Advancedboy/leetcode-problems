#include<iostream>
#include<vector>
#include<math.h>

int maxArea(std::vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;
    int maxArea = 0;

    while (l < r) {
        int area = (r - l) * std::min(height[l], height[r]);
        maxArea = std::max(maxArea, area);

        if (height[l] < height[r]) {
            ++l;
        } else {
            --r;
        }
    }

    return maxArea;
}


int main() {
   std::vector test = {1,8,6,2,5,4,8,3,7} ;
   std::vector test2 = {1, 1};
   std::vector test3 = { 4,3,2,1,4};
   std::cout << maxArea(test) << std::endl;
   std::cout << maxArea(test2) << std::endl;
   std::cout << maxArea(test3) << std::endl;
}