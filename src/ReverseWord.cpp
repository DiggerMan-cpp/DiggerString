#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::reverseWords(const std::string& str) {
        std::string result;
        std::string word;
        std::istringstream iss(str);
        while (iss >> word) {
            std::reverse(word.begin(), word.end());
            result += word + " ";
        }
        result.pop_back(); 
        return result;
    }

}