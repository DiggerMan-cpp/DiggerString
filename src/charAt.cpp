#include <DiggerString.h>
namespace DiggerString {
    static char charAt(const std::string& str, int index) {
        if (index >= 0 && index < static_cast<int>(str.length())) {
            return str[index];
        }
        return '\0';
    }
}
