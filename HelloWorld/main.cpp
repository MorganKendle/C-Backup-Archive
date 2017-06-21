#include <iostream>
#include "add.h"
/*This is my first C++ program ever, started on 21/06/2017, and will
 *hopefully be the start of a long and prosperous use of C++ in my
 *day-to-day operation.  0v0
 */

int main()
{
    std::string x = "Hello World, this is being printed from a variable!";
    std::cout << "This is stored in x: " << x << std::endl;
    std::cout << "If you saw that, it worked!" << std::endl;
    std::cout << "Goodbye world!" << std::endl;
    std::string a;
    std::cout << "Input a value: ";
    std::cin >> a;
    std::cout << "What you just typed: " << a << std::endl;

    std::cout << "Adding two numbers..." << std::endl;
    int g;
    int h;
    std::cout << "Input a value for number 1: ";
    std::cin >> g;
    std::cout << "Input a value for number 2: ";
    std::cin >> h;
    std::cout << std::endl;
    std::cout << "The numbers added are: " << addNumbers(g, h) << std::endl;
    return 0;
}

