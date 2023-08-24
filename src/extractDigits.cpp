#include <DiggerString.h>
namespace DiggerString {
    static std::string DiggerString::extractDigits(const std::string& str) {
        std::string result;
        for (char ch : str) {
            if (std::isdigit(ch)) {
                result += ch;
            }
        }
        return result;
    }
}