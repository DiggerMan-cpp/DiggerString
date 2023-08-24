cmake_minimum_required (VERSION 3.8)

project ("DiggerString"
	VERSION 0.0
)
add_library(${PROJECT_NAME} STATIC)
target_include_directories(${PROJECT_NAME} PUBLIC 
include
)
target_sources(${PROJECT_NAME} PRIVATE
	"src/Find.cpp"
	"src/Trim.cpp"
	"src/Replace.cpp"
	"src/Split.cpp"
	"src/Count.cpp" 
	"src/StartWith.cpp"
	"src/Join.cpp" 
	"src/IsNumeric.cpp"
	"src/EndsWith.cpp"
	"src/ToLower.cpp" 
	"src/ToUpper.cpp" 
	"src/Contains.cpp"
	"src/ReplaceAll.cpp"	
	 "src/Palindrom.cpp"
	 "src/Pad.cpp"
	 "src/IsEmpty.cpp"
	 "src/substring.cpp"
	 "src/ToInt.cpp" 
	 "src/ToDouble.cpp"
	 "src/ReverseWord.cpp"
	 "src/Shuffle.cpp"
	 "src/toCamelCase.cpp"
	 "src/toSnakeCase.cpp"
	 "src/Capitalize.cpp"
	 "src/replaceMultiple.cpp"
	 "src/charAt.cpp" 
	 "src/removeWhitespace.cpp"
	 "src/isValidEmail.cpp"
	 "src/toBinary.cpp"
	 "src/toHex.cpp"
	 "src/isValidUrl.cpp"
	 "src/capitalizeWords.cpp"
	 "src/reverseLines.cpp"
	 "src/isValidIpAddress.cpp"
	 "src/countWords.cpp")
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_14)