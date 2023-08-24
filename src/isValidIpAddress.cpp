#include <DiggerString.h>
namespace DiggerString {
     bool DiggerString::isValidIpAddress(const std::string& str) {      
        std::regex ipRegex(R"(^(?:[0-9]{1,3}\.){3}[0-9]{1,3}$)");
        return std::regex_match(str, ipRegex);
    }

}