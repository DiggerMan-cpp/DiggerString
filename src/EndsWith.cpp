#include <DiggerString.h>
namespace DiggerString {
    bool DiggerString::endsWith(const std::string& str, const std::string& suffix) {
        if (suffix.size() > str.size()) {
            return false;
        }
        return std::equal(suffix.rbegin(), suffix.rend(), str.rbegin());
    }
}