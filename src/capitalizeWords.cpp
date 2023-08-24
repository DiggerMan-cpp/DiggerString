#include <DiggerString.h>
namespace DiggerString {
    static std::string capitalizeWords(const std::string& str) {
        std::istringstream iss(str);
        std::string result, word;
        while (iss >> word) {
            if (!result.empty()) {
                result += " ";
            }
            word[0] = std::toupper(word[0]);
            result += word;
        }
        return result;
    }
}