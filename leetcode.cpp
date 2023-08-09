#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> splitStrings(const std::vector<std::string>& words, char separator) {
    std::vector<std::string> result;
    for (const std::string& word : words) {
        std::istringstream iss(word);
        for(int i = 0; i< word)
        std::string split;
        while (std::getline(iss, split, separator)) {
            if (!split.empty()) {
                result.push_back(split);
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"apple-orange", "banana", "grape-mango", "kiwi"};
    char separator = '-';

    std::vector<std::string> output = splitStrings(words, separator);

    for (const std::string& str : output) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
