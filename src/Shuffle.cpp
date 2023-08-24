#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::shuffle(const std::string& str) {
        std::string result = str;
        std::random_shuffle(result.begin(), result.end());
        return result;
    }
}