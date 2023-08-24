#include <DiggerString.h>
namespace DiggerString {
         bool DiggerString::isValidEmail(const std::string& str) {
        static const std::regex emailRegex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.\w+)+)");
        return std::regex_match(str, emailRegex);
    }

}