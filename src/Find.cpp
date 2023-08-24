#include <DiggerString.h>

namespace DiggerString {

    int DiggerString::find(const std::string& str, const std::string& search) {
        size_t foundPos = str.find(search);

        if (foundPos != std::string::npos) {
            return static_cast<int>(foundPos);
        }

        return -1; 
    }

} 