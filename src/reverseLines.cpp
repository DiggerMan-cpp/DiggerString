#include <DiggerString.h>
namespace DiggerString {

     std::string DiggerString::reverseLines(const std::string& str) {
        std::istringstream iss(str);
        std::string line, result;
        while (std::getline(iss, line)) {
            std::reverse(line.begin(), line.end());
            if (!result.empty()) {
                result += "";
            }
            result += line;
        }
        return result;
    }
}
