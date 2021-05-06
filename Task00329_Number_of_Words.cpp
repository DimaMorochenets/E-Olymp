#include <iostream>
#include <string>
#include <sstream>

int main() 
{
    size_t count = 0;
	std::string text;
    std::getline(std::cin, text);

    for(size_t i = 0; i < text.size(); i++) {
        while((isspace(text[i]) || text[i] == '-') && i < text.size()) i++;
        while(!isspace(text[i]) && i < text.size()) i++;
        count++;
    }

    std::cout << count;
    
	return 0;
}

/*There is some sentence in unknown language. 
You need to count the number of words in it. 
The letters of the alphabet in unknown language are the letters of the Latin alphabet and Arabian digits. 
It is guaranteed, that other symbols, except blanks and punctuation marks, are not present in sentence*/