#include <DiggerString.h>
namespace DiggerString {
    bool DiggerString::isPalindrome(const std::string& str) {
        std::string reversed = reverse(str);
        return str == reversed;
    }
}