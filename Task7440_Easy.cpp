#include <iostream>
#include <string>

void answer(std::string);
bool palindrom(std::string, size_t);

int main()
{
    std::string str;
    std::cin >> str;

    answer(str);

    return 0;
}

void answer(std::string str)
{
    for (size_t i = 0; i <= str.size() / 2; i++)
        if (str[i] != str[str.size() - 1 - i]) {
            if (palindrom(str, i) || palindrom(str, str.size() - 1 - i)) return;
            else { std::cout << "no"; return; }
        }
}
bool palindrom(std::string str, size_t index_erase)
{
    str.erase(str.begin() + index_erase);

    for (size_t i = 0; i < str.size() / 2; i++)
        if (str[i] ^ str[str.size() - 1 - i])
            return false;

    std::cout << "yes" << std::endl << str;

    return true;
}

/*Given a string s, determine if it can be a palindrome after deleting exactly one character*/