#include <DiggerString.h>
namespace DiggerString {

    std::string DiggerString::replaceAll(const std::string& str, const std::string& search, const std::string& replacement) {
        std::string result = str;
        size_t pos = 0;
        while ((pos = result.find(search, pos)) != std::string::npos) {
            result.replace(pos, search.length(), replacement);
            pos += replacement.length();
        }
        return result;
    }

}
