#include <DiggerString.h>
namespace DiggerString {

     std::string DiggerString::replaceMultiple(const std::string& str, const std::unordered_map<std::string, std::string>& replacements) {
        std::string replaced = str;
        for (const auto& replacement : replacements) {
            size_t startIndex = 0;
            while ((startIndex = replaced.find(replacement.first, startIndex)) != std::string::npos) {
                replaced.replace(startIndex, replacement.first.length(), replacement.second);
                startIndex += replacement.second.length();
            }
        }
        return replaced;
    }
}
