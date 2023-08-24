#include <DiggerString.h>
namespace DiggerString {
    static int countWords(const std::string& str) {
        std::istringstream iss(str);
        int count = 0;
        std::string word;
        while (iss >> word) {
            count++;
        }
        return count;
    }
}