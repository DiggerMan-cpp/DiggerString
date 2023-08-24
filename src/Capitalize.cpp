#include <DiggerString.h>
namespace DiggerString {
    static std::string capitalize(const std::string& str) {
        std::string capitalized = str;
        if (!capitalized.empty()) {
            capitalized[0] = std::toupper(capitalized[0]);
        }
        return capitalized;
    }
}