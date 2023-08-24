#include <DiggerString.h>
namespace DiggerString {
	std::string DiggerString::substring(const std::string& str, int startIndex, int length) {
		return str.substr(startIndex, length);
	}
}