#include <DiggerString.h>
namespace DiggerString {
	bool DiggerString::startsWith(const std::string& str, const std::string& prefix) {
		return str.compare(0, prefix.size(), prefix) == 0;
	}
}