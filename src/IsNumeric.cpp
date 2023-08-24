#include <DiggerString.h>
namespace DiggerString {
	bool DiggerString::isNumeric(const std::string& str) {
		return !str.empty() && std::all_of(str.begin(), str.end(), ::isdigit);
	}
}