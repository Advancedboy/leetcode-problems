#include<iostream>
#include<string>
#include<vector>

int romanToInt(std::string s) {
    int result = 0;

    auto value = [](char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    };

    for (size_t i = 0; i < s.size(); ++i) {
        if (i + 1 < s.size() && value(s[i]) < value(s[i + 1])) {
            result += value(s[i + 1]) - value(s[i]);
            ++i; // пропускаем следующий символ
        } else {
            result += value(s[i]);
        }
    }

    return result;
}

int main() {
  std::cout << romanToInt("XIX");
}
