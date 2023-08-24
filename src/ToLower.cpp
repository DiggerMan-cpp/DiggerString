#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::toLower(const std::string& str) {
        std::string result = str;
        std::transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }

}