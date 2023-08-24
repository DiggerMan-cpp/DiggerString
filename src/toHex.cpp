#include <DiggerString.h>
namespace DiggerString {
     std::string DiggerString::toHex(int number) {
        std::stringstream hexStream;
        hexStream << std::hex << number;
        return hexStream.str();
    }
}