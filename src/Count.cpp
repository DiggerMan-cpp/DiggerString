#include <DiggerString.h>
namespace DiggerString {
    int DiggerString::count(const std::string& str, char character) {
        int count = 0;
        for (char c : str) {
            if (c == character) {
                count++;
            }
        }
        return count;
    }
}