#include<iostream>
#include<string>

bool isSubsequence(std::string s, std::string t) {
    int l, r = 0;
    for(l = 0; l < t.size(); l++) {
        if(t[l] == s[r]) {
            r++;
        }
    }
    return r == s.size();
}

int main() {
   std::string s = "ave", t = "Pavel";
   std::cout << isSubsequence(s, t) << std::endl;
}