#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::toUpper(const std::string& str) {
        std::string result = str;
        std::transform(result.begin(), result.end(), result.begin(), ::toupper);
        return result;
    }
}
