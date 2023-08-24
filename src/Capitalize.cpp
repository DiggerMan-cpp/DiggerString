#include <DiggerString.h>
namespace DiggerString {
       std::string DiggerString::capitalize(const std::string& str) {
        std::string capitalized = str;
        if (!capitalized.empty()) {
            capitalized[0] = std::toupper(capitalized[0]);
        }
        return capitalized;
    }
}
