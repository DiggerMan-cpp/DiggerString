#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::toCamelCase(const std::string& str) {
        std::string result;

        bool capitalizeNext = false;
        for (char c : str) {
            if (c == '_') {
                capitalizeNext = true;
            }
            else {
                result += capitalizeNext ? std::toupper(c) : c;
                capitalizeNext = false;
            }
        }

        return result;
    }

}