#include <DiggerString.h>
namespace DiggerString {

    std::string DiggerString::replace(const std::string& str, const std::string& search, const std::string& replacement) {
        std::string result = str;
        size_t pos = result.find(search);

        while (pos != std::string::npos) {
            result.replace(pos, search.length(), replacement);
            pos = result.find(search, pos + replacement.length());
        }

        return result;
    }

} 
