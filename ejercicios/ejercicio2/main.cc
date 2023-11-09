#include <iostream>
#include "change_case.h"

int main() {
    std::string input;
    std::cin >> input;

    changeCase(input);

    std::cout << input << std::endl;

    return 0;
}

