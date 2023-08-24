#include <DiggerString.h>
namespace DiggerString {
     int DiggerString::countWords(const std::string& str) {
        std::istringstream iss(str);
        int count = 0;
        std::string word;
        while (iss >> word) {
            count++;
        }
        return count;
    }
}
