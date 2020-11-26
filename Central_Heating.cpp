#include <iostream>

int main()
{
    uint64_t height, width, length, volume;
    std::cin >> height >> width >> length >> volume;
    uint64_t house_volume = height * width * length;
    if(house_volume % volume) std::cout << house_volume / volume + 1 << std::endl;
    else std::cout << house_volume / volume << std::endl;

    return 0;
}

/*Kar Karych with Pin were drinking the cold milk shakes and eating their with ice cream for eighteen hours. 
Then Kar Karych got a terrible chill, and Pin decided to make a central heating in the friend's house. 
The number of radiators must be calculated strictly according to Standard number 800333-90-06*. 
For simplicity, Pin decided to buy simple radiators. 
According to the table 14.1.3 of this Standard, each battery heats a certain amount of air - exactly k cubic meters. 
The room that Pin is going to heat, has the following dimensions:
the height h,
the width w,
the length l
Find the minimum number of radiators that Pin wants to buy. 
Please note that if the temperature in the Kar Karych lodge will be lower than Standart, Kar Karych never recover.*/