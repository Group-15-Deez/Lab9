/* Charles Young
    4/19/2023
    lab9 pt.2
*/
#include <vector>
#include <iostream>
#include "accum.h"

int main() {
    std::vector<int> int_vector;
    std::cout << "Enter four numbers: ";
    for (int i = 0; i < 4; ++i) {
        int input;
        std::cin >> input;
        int_vector.push_back(input);
    }
    int int_sum = accum(int_vector);
    std::cout << "The sum of the numbers is " << int_sum << std::endl;

    std::vector<std::string> string_vector;
    std::cout << "Enter four strings: ";
    for (int i = 0; i < 4; ++i) {
        std::string input;
        std::cin >> input;
        string_vector.push_back(input);
    }
    std::string string_concatenation = accum(string_vector);
    std::cout << "The sum of the strings is " << string_concatenation << std::endl;

    return 0;
}
