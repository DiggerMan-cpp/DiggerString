#include <DiggerString.h>
namespace DiggerString {
    double DiggerString::toDouble(const std::string& str) {
        return std::stod(str);
    }
}