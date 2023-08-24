#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::toSnakeCase(const std::string& str) {
        std::string result;

        for (char c : str) {
            if (std::isupper(c)) {
                result += '_';
                result += std::tolower(c);
            }
            else {
                result += c;
            }
        }

        return result;
    }
}