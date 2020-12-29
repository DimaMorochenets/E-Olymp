#include <iostream>

int main()
{
    char lt;
    std::cin >> lt;
    std::cout << char(lt - 1) << " " << char(lt + 1) << std::endl;

    return 0;
}

/*Given letter of English alphabet. 
Print its previous and next letter.*/