#include<iostream>
#include<vector>
#include<climits>

using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int first = INT_MAX;
    int second = INT_MAX;

    for (int x : nums) {
        if (x <= first) {
            first = x;
        } 
        else if (x <= second) {
            second = x;             } 
        else {
            return true;
        }
    }
    return false;
}


    

int main() {
    std::vector<int> v1 = { 1,2,3,4,5}; 
    std::vector<int> v2 = {5, 4, 3, 2, 1};
    std::vector<int> v3 = {2, 1, 5, 0, 4, 6};
    std::vector<int> v4 = {1, 2, 1, 3};

    std::cout << increasingTriplet(v1) << std::endl;
    std::cout << increasingTriplet(v2) << std::endl;
    std::cout << increasingTriplet(v3) << std::endl;
    std::cout << increasingTriplet(v4) << std::endl;
}