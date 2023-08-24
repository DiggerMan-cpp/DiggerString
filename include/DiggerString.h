#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <regex>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include <cctype>
namespace DiggerString {

    class DiggerString {
    public:
        DiggerString();

        static int find(const std::string& str, const std::string& search);
        static std::string trim(const std::string& str);
        static std::string replace(const std::string& str, const std::string& search, const std::string& replacement);
        static std::vector<std::string> split(const std::string& str, const std::string& delimiter);

        static int count(const std::string& str, char character);
        static bool startsWith(const std::string& str, const std::string& prefix);
        static bool endsWith(const std::string& str, const std::string& suffix);
        
        static std::string join(const std::vector<std::string>& strings, const std::string& delimiter);
        static bool isNumeric(const std::string& str);
        static std::string toLower(const std::string& str);
        static std::string toUpper(const std::string& str);
        static bool contains(const std::string& str, const std::string& subStr);
        static std::string replaceAll(const std::string& str, const std::string& search, const std::string& replacement);
     
        static std::string pad(const std::string& str, int width, char paddingChar);
        static bool isEmpty(const std::string& str);
        
        static int toInt(const std::string& str);
        static double toDouble(const std::string& str);
        static std::string reverseWords(const std::string& str);
        static std::string shuffle(const std::string& str);
        static std::string toCamelCase(const std::string& str);
        static std::string toSnakeCase(const std::string& str);
        static std::string capitalize(const std::string& str);
        static std::string replaceMultiple(const std::string& str, const std::unordered_map<std::string, std::string>& replacements);
        static char charAt(const std::string& str, int index);
        static std::string removeWhitespace(const std::string& str);
        static bool isValidEmail(const std::string& str);
        static std::string toBinary(int number);
        static std::string toHex(int number);
        static bool isValidUrl(const std::string& str);
        static std::string capitalizeWords(const std::string& str);
        static std::string reverseLines(const std::string& str);
        static bool isValidIpAddress(const std::string& str);
        static std::string extractDigits(const std::string& str);
        static int countWords(const std::string& str);
    };

}
