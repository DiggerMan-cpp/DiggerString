[![Windows](https://github.com/DiggerMan-cpp/DiggerString/actions/runs/5958099662/workflow/badge.svg)](https://github.com/DiggerMan-cpp/DiggerString/actions/runs/5958099662/workflow)
# DiggerString
Easy String Manipulation
Окей! Похоже, что вам нужна документация на эти функции. Вот подробное описание каждой из них:

#### `countWords(const std::string& str)`

Эта функция принимает строку и возвращает количество слов в ней. Она использует `std::istringstream`, чтобы разделить строку на отдельные слова, и просто подсчитывает их количество с помощью счетчика. Затем функция возвращает это количество.

#### `endsWith(const std::string& str, const std::string& suffix)`

Эта функция проверяет, заканчивается ли строка `str` заданным суффиксом `suffix`. Она сравнивает последние символы двух строк, и если они совпадают, то возвращает `true`, в противном случае возвращает `false`. Если длина суффикса больше, чем длина строки, функция сразу возвращает `false`.

#### `extractDigits(const std::string& str)`

Эта функция извлекает все цифры из строки `str`. Она проходит по каждому символу в строке и, если символ является цифрой, добавляет его к результирующей строке. В конце функция возвращает результирующую строку, содержащую только цифры.

#### `find(const std::string& str, const std::string& search)`

Эта функция находит первое вхождение подстроки `search` в строке `str`. Она использует метод `find` для поиска подстроки и возвращает позицию первого вхождения. Если подстрока не найдена, функция возвращает -1.

#### `isEmpty(const std::string& str)`

Эта функция проверяет, является ли строка `str` пустой. Она просто вызывает метод `empty()` для проверки, и если строка пустая, то возвращает `true`, в противном случае возвращает `false`.

#### `isNumeric(const std::string& str)`

Эта функция проверяет, является ли строка `str` числом. Она проверяет, что строка не пустая и содержит только цифры с помощью метода `std::all_of`. Если условие выполняется, функция возвращает `true`, в противном случае возвращает `false`.

#### `isValidEmail(const std::string& str)`

Эта функция проверяет, является ли строка `str` валидным email-адресом. Она использует регулярное выражение, чтобы проверить, соответствует ли строка заданному шаблону email-адреса. Если условие выполняется, функция возвращает `true`, в противном случае возвращает `false`.

#### `isValidIpAddress(const std::string& str)`

Эта функция проверяет, является ли строка `str` валидным IP-адресом. Она также использует регулярное выражение для проверки, соответствует ли строка заданному шаблону IP-адреса. Если условие выполняется, функция возвращает `true`, в противном случае возвращает `false`.

#### `isValidUrl(const std::string& str)`

Эта функция проверяет, является ли строка `str` валидным URL-адресом. Она проверяет, начинается ли строка с "http://" или "https://", и если условие выполняется, функция возвращает `true`, в противном случае возвращает `false`.

#### `join(const std::vector<std::string>& strings, const std::string& delimiter)`

Эта функция объединяет все строки из вектора `strings` в одну строку с использованием разделителя `delimiter`. Она проходит по каждому элементу вектора и добавляет его к результирующей строке, а также добавляет разделитель после каждого элемента, кроме последнего. В конце функция возвращает результирующую строку, объединяя все строки из вектора.

#### `pad(const std::string& str, int width, char paddingChar)`

Эта функция добавляет заполнитель `paddingChar` слева от строки `str`, чтобы общая ширина строки была равна `width`. Если длина строки `str` уже больше или равна `width`, то функция просто возвращает исходную строку. В противном случае, создается строка `padding` с длиной `paddingLength`, которая содержит только символ заполнителя `paddingChar`. Затем строка `padding` добавляется перед строкой `str` и результат возвращается.

#### `isPalindrome(const std::string& str)`

Эта функция проверяет, является ли строка `str` палиндромом. Для этого она создает новую строку `reversed`, содержащую перевернутую версию исходной строки `str`. Затем функция сравнивает исходную строку `str` с перевернутой строкой `reversed`. Если обе строки совпадают, то функция возвращает `true`, в противном случае возвращает `false`.

#### `removeWhitespace(const std::string& str)`

Эта функция удаляет все пробелы из строки `str`. Она создает новую пустую строку `withoutWhitespace` и проходит по каждому символу в исходной строке `str`. Если символ не является пробелом (проверка с использованием `std::isspace`), то символ добавляется к результирующей строке `withoutWhitespace`. В конце функция возвращает строку без пробелов.

#### `replace(const std::string& str, const std::string& search, const std::string& replacement)`

Эта функция заменяет все вхождения подстроки `search` в строке `str` на подстроку `replacement`. Она создает новую строку `result`, которая инициализируется значением исходной строки `str`. Затем функция находит первую позицию вхождения `search` в строке `result` с помощью метода `find`. Пока найдено вхождение, функция заменяет подстроку `search` на `replacement` при помощи метода `replace` и обновляет позицию для следующего поиска. В конце функция возвращает измененную строку `result`.

#### `replaceAll(const std::string& str, const std::string& search, const std::string& replacement)`

Эта функция заменяет все вхождения подстроки `search` в строке `str` на подстроку `replacement`. Она создает новую строку `result`, которая инициализируется значением исходной строки `str`. Затем функция находит все позиции вхождения `search` в строке `result` с помощью метода `find`. Пока найдено вхождение, функция заменяет подстроку `search` на `replacement` и обновляет позицию для следующего поиска. В конце функция возвращает измененную строку `result`.

#### `replaceMultiple(const std::string& str, const std::unordered_map<std::string, std::string>& replacements)`

Эта функция заменяет все указанные пары ключ-значение из `replacements` в строке `str`. Она создает новую строку `replaced`, которая инициализируется значением исходной строки `str`. Затем функция проходит по каждой паре ключ-значение в `replacements` и находит все вхождения ключа `replacement.first` в строке `replaced` с помощью метода `find`. Пока есть вхождения, функция заменяет ключ на соответствующее значение `replacement.second` и обновляет позицию для следующего поиска. В конце функция возвращает измененную строку `replaced`.


#### reverseLines(const std::string& str)

Эта функция переворачивает строки в строке str. Она использует std::istringstream, чтобы разделить строку на отдельные строки. Затем функция проходит по каждой строке с помощью цикла while, переворачивает символы в каждой строке с помощью std::reverse и добавляет перевернутую строку к результату result. При добавлении каждой строки, кроме первой, функция добавляет переход на новую строку. В конце функция возвращает результат.

#### reverseWords(const std::string& str)

Эта функция переворачивает слова в строке str. Она использует std::istringstream, чтобы разделить строку на отдельные слова. Внутри цикла while она переворачивает каждое слово с помощью std::reverse и добавляет его к результирующей строке result. После каждого слова она добавляет пробел. В конце функция удаляет последний лишний пробел с помощью result.pop_back() и возвращает измененную строку.

#### shuffle(const std::string& str)

Эта функция перемешивает символы в строке str. Она создает копию исходной строки str в переменной result. Затем она случайным образом перемешивает символы в result с помощью std::random_shuffle. В конце функция возвращает измененную строку result.

#### split(const std::string& str, const std::string& delimiter)

Эта функция разделяет строку str на подстроки, используя указанный разделитель delimiter. Она создает вектор tokens для хранения полученных подстрок. Затем она находит позицию первого вхождения разделителя в строке str с помощью find и проходит через строку, разделяя ее на подстроки и добавляя их в вектор tokens. Когда все подстроки разделены, функция добавляет последнюю подстроку, оставшуюся после последнего разделителя. В конце функция возвращает вектор tokens с результатом разделения.

#### startsWith(const std::string& str, const std::string& prefix)

Эта функция проверяет, начинается ли строка str с заданного префикса prefix. Она использует метод compare для сравнения префикса с первыми символами строки. Если результат сравнения равен 0, то строка начинается с префикса, и функция возвращает true, в противном случае возвращает false.

#### substring(const std::string& str, int startIndex, int length)

Эта функция извлекает подстроку из строки str, начиная с указанного индекса startIndex и имеющую заданную длину length. Она использует метод substr для извлечения подстроки. Функция возвращает полученную подстроку.

#### toBinary(int number)

Эта функция преобразует целое число number в его двоичное представление в виде строки. Она инициализирует пустую строку binary и проходит по числу в цикле while. В каждой итерации она добавляет символ '0' или '1' к строке binary, в зависимости от остатка от деления числа на 2. В конце функция переворачивает строку binary с помощью std::reverse и возвращает ее.

#### toCamelCase(const std::string& str)

Эта функция преобразует строку str в формат CamelCase. Она инициализирует пустую строку result и флаг capitalizeNext в значение false. Затем функция проходит по каждому символу в строке str с использованием цикла for. Если символ равен '_', флаг capitalizeNext устанавливается в значение true. В противном случае, символ добавляется к результирующей строке result с учетом того, нужно ли его сделать заглавным (std::toupper). Флаг capitalizeNext сбрасывается после добавления символа. В конце функция возвращает результат.

#### toDouble(const std::string& str)

Эта функция преобразует строку str в значение типа double с помощью std::stod и возвращает это значение.

#### toHex(int number)

Эта функция преобразует целое число number в его шестнадцатеричное представление в виде строки. Она использует std::stringstream для создания потока, в который записывается число в шестнадцатеричном формате с помощью std::hex. Затем строка с шестнадцатеричным представлением возвращается.

#### toInt(const std::string& str)

Эта функция преобразует строку str в значение типа int с помощью std::stoi и возвращает это значение.

#### toLower(const std::string& str)

Эта функция преобразует строку str в нижний регистр. Она создает копию исходной строки str в переменной result. Затем с помощью std::transform она применяет функцию ::tolower к каждому символу в строке result, чтобы преобразовать его в нижний регистр. В конце функция возвращает измененную строку result.

#### toSnakeCase(const std::string& str)

Эта функция преобразует строку str в формат snake_case. Она инициализирует пустую строку result. Затем функция проходит по каждому символу в исходной строке str с использованием цикла for. Если символ является заглавной буквой (проверка с использованием std::isupper), то функция добавляет символ '_' перед символом в нижнем регистре (полученным с помощью std::tolower). В противном случае, символ просто добавляется к результирующей строке result. В конце функция возвращает результат.

#### toUpper(const std::string& str)

Эта функция преобразует строку str в верхний регистр. Она создает копию исходной строки str в переменной result. Затем с помощью std::transform она применяет функцию ::toupper к каждому символу в строке result, чтобы преобразовать его в верхний регистр. В конце функция возвращает измененную строку result.

#### trim(const std::string& str)

Эта функция удаляет пробельные символы из начала и конца строки str. Она инициализирует переменные start и end, которые находят первую позицию первого непробельного символа и последнюю позицию последнего непробельного символа в строке str. Если найдены начальная и конечная позиции (значение start и end не равно std::string::npos), то функция возвращает подстроку от start до end, включительно. Если пробельные символы отсутствуют, функция возвращает пустую строку.

#### capitalize(const std::string& str)

Эта функция преобразует первую букву строки str в верхний регистр. Она создает копию исходной строки str в переменной capitalized. Затем функция проверяет, что строка не пустая, и если это так, то изменяет первый символ строки на его верхний регистр с помощью std::toupper. В конце функция возвращает измененную строку capitalized.

#### capitalizeWords(const std::string& str)

Эта функция преобразует первую букву каждого слова в строке str в верхний регистр. Она использует std::istringstream, чтобы разделить строку на отдельные слова. Затем функция проходит по каждому слову с помощью цикла while, изменяет первый символ слова на его верхний регистр с помощью std::toupper и добавляет слово к результирующей строке result. При добавлении каждого слова, кроме первого, функция добавляет пробел в начале слова. В конце функция возвращает результат.

#### charAt(const std::string& str, int index)

Эта функция возвращает символ на заданной позиции index в строке str. Если значение индекса index находится в допустимых границах строки (от 0 до str.length() - 1 включительно), функция возвращает символ на заданной позиции. Если значение индекса выходит за пределы строки, функция возвращает нулевой символ \0.

#### contains(const std::string& str, const std::string& subStr)

Эта функция проверяет, содержит ли строка str подстроку subStr. Она использует метод find для поиска подстроки в строке. Если подстрока найдена (возвращаемое значение не равно std::string::npos), функция возвращает true, в противном случае возвращает false.

#### count(const std::string& str, char character)

Эта функция подсчитывает количество вхождений символа character в строку str. Она инициализирует счетчик count в нуле и проходит по каждому символу в строке str. Если символ совпадает с искомым символом character, функция увеличивает счетчик на единицу. В конце функция возвращает значение счетчика.

