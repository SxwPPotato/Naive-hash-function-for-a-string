#include <iostream>
#include <string>

int simple_string_hash(std::string str) {
    int hash = 0;
    for (int i = 0; i < str.size(); ++i) {
        hash += static_cast<int> (str[i]);
    }
    return hash;
}

int main()
{
    setlocale(LC_ALL, "russian");
    std::string str;
    do {
        std::cout << "\nВведите строку: ";
        std::cin >> str;
        std::cout << "\nНаивный хэш строки " << str << " = " << simple_string_hash(str) << "\n";
    } while (str != "exit");

    return 0;

}
