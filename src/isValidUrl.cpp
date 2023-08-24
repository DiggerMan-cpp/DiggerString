#include <DiggerString.h>
namespace DiggerString {
     bool DiggerString::isValidUrl(const std::string& str) {
        return str.substr(0, 7) == "http://" || str.substr(0, 8) == "https://";
    }
}