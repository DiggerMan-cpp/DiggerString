#include <DiggerString.h>
namespace DiggerString {
	bool DiggerString::contains(const std::string& str, const std::string& subStr) {
		return str.find(subStr) != std::string::npos;
	}

}