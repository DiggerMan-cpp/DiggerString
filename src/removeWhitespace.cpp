#include <DiggerString.h>
namespace DiggerString {
     std::string DiggerString::removeWhitespace(const std::string& str) {
        std::string withoutWhitespace;
        for (char c : str) {
            if (!std::isspace(c)) {
                withoutWhitespace += c;
            }
        }
        return withoutWhitespace;
    }
}