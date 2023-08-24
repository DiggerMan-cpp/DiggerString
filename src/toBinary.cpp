#include <DiggerString.h>
namespace DiggerString {
     std::string DiggerString::toBinary(int number) {
        std::string binary;
        while (number > 0) {
            binary += '0' + (number % 2);
            number /= 2;
        }
        if (binary.empty()) {
            binary = "0";
        }
        std::reverse(binary.begin(), binary.end());
        return binary;
    }
}