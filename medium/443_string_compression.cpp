<<<<<<< HEAD
class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0; 
        int read = 0;  
        int n = chars.size();

        while (read < n) {
            char current = chars[read];
            int count = 0;

            while (read < n && chars[read] == current) {
=======
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
>>>>>>> 233c2e83caed5ba42a30846199bc168b30f3272b
                read++;
                count++;
            }

            chars[write++] = current;
<<<<<<< HEAD

            if (count > 1) {
                string num = to_string(count);
                for (char c : num) {
=======
            if(count > 1) {
                std::string num = std::to_string(count);
                for(char c : num) {
>>>>>>> 233c2e83caed5ba42a30846199bc168b30f3272b
                    chars[write++] = c;
                }
            }
        }
<<<<<<< HEAD

        return write;
    }
};
=======
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
>>>>>>> 233c2e83caed5ba42a30846199bc168b30f3272b
