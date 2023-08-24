#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::join(const std::vector<std::string>& strings, const std::string& delimiter) {
        std::string result;
        for (size_t i = 0; i < strings.size(); i++) {
            result += strings[i];
            if (i != strings.size() - 1) {
                result += delimiter;
            }
        }
        return result;
    }
}