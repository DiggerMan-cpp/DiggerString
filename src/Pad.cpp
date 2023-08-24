#include <DiggerString.h>
namespace DiggerString {
    std::string DiggerString::pad(const std::string& str, int width, char paddingChar) {
        if (str.length() >= width) {
            return str;
        }
        int paddingLength = width - str.length();
        std::string padding(paddingLength, paddingChar);
        return padding + str;
    }
}