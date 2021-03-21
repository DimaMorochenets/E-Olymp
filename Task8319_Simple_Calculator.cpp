#include <iostream>

int main()
{
    int a, b;
    char op;
    std::cin >> a >> op >> b;
    switch(op){
        case '+': std::cout << a + b << std::endl;
            break;
        case '-': std::cout << a - b << std::endl;
            break;
        case '*': std::cout << a * b << std::endl;
            break;
        default: std::cout << a / b << std::endl;
    }

    return 0;
}

/*Simple Calculator
A simple calculator accepts the following kinds of strings as input:

num + num
num - num
num * num
num / num
where num is a positive integer, between 1 and 10000 inclusive.

Find the value produced by the given expression. Here +, -, *, and / denote 
addition, subtraction, multiplication and division respectively. 
All operations are done on integers, so "5 / 3" is 1.*/