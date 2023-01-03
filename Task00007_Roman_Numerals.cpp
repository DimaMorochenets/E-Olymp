#include <iostream>
#include <string>

enum RomNumber {
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000
};

int toDec(const std::string& str);
std::string toRom(int value);

int main()
{
    auto toUpperCase = [](std::string& str) {
        for(auto& i:str) 
            if (i >= 97 && i <= 122)
                i -= 32;
    };

    std::string firstNum;
    std::string secondNum;
    std::string input;

    std::cin >> input;

    firstNum = input.substr(0, input.find_first_of('+'));
    toUpperCase(firstNum);

    secondNum = input.substr(input.find_first_of('+') + 1);
    toUpperCase(secondNum);

    std::cout << toRom(toDec(firstNum) + toDec(secondNum)) << std::endl;

    return 0;
}

int toDec(const std::string& str)
{
    auto getValue = [](const char romValue) {
        switch (romValue) {
            case 'I': return 1;     break;
            case 'V': return 5;     break;
            case 'X': return 10;    break;
            case 'L': return 50;    break;
            case 'C': return 100;   break;
            case 'D': return 500;   break;
            case 'M': return 1000;  break;
            default:  return 0;
        }
    };

    int value = 0;

    for (int i = 0; i < str.size(); i++) {
        if (i == str.size() - 1) {
            value += getValue(str[i]);
            break;
        }

        if (getValue(str[i]) < getValue(str[i + 1])) {
            value += getValue(str[i + 1]) - getValue(str[i]);
            i++;
            continue;
        }

        value += getValue(str[i]);
    }

    return value;
}

std::string toRom(int value)
{
    std::string romValue;

    auto addToRomValue = [&romValue](int& value, const RomNumber romNumber, const char key) {
        while (value >= romNumber) {
            romValue.push_back(key);
            value -= romNumber;
        }
    };

    addToRomValue(value, RomNumber::M, 'M');
    if (value >= RomNumber::M - RomNumber::C) {
        romValue += "CM";
        value -= RomNumber::M - RomNumber::C;
    }

    addToRomValue(value, RomNumber::D, 'D');
    if (value >= RomNumber::D - RomNumber::C) {
        romValue += "CD";
        value -= RomNumber::D - RomNumber::C;
    }

    addToRomValue(value, RomNumber::C, 'C');
    if (value >= RomNumber::C - RomNumber::X) {
        romValue += "XC";
        value -= RomNumber::C - RomNumber::X;
    }

    addToRomValue(value, RomNumber::L, 'L');
    if (value >= RomNumber::L - RomNumber::X) {
        romValue += "XL";
        value -= RomNumber::L - RomNumber::X;
    }

    addToRomValue(value, RomNumber::X, 'X');
    if (value >= RomNumber::X - RomNumber::I) {
        romValue += "IX";
        value -= RomNumber::X - RomNumber::I;
    }

    addToRomValue(value, RomNumber::V, 'V');
    if (value >= RomNumber::V - RomNumber::I) {
        romValue += "IV";
        value -= RomNumber::V - RomNumber::I;
    }

    addToRomValue(value, RomNumber::I, 'I');

    return romValue;
}

/*Count the sum of two natural numbers A and B, which have written in roman system of numeration. 
The answer you must write too in roman system of numeration.

M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1 (all numbers is less 2000).

In line wrote two number of roman system numeration, between which stand mark "+".
*/