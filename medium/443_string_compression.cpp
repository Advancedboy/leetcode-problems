#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int read = 0;

        while(read < n) {
            char current = chars[read];
            int count = 0;

            while(read < n && chars[read] == current) {
                read++;
                count++;
            }

            chars[write++] = current;
            if(count > 1) {
                std::string num = std::to_string(count);
                for(char c : num) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};

int main() {
    Solution sol;

    std::vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = sol.compress(chars);
    std::cout << "New length: " << newLength << std::endl;
    std::cout << "Compressed array: ";
    for(int i = 0; i < newLength; ++i) {
        std::cout << chars[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
