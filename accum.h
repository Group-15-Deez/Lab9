/* Charles Young
    4/19/2023
    lab9 pt.2
*/
#include <vector>
#include <string>

template<typename T>
T accum(std::vector<T> v) {
    T sum = T(); // Initialize the accumulator using the default constructor
    for (const auto& x : v) {
        sum += x;
    }
    return sum;
}

// Overloaded function for string type
std::string accum(std::vector<std::string> v) {
    std::string result;
    for (size_t i = 0; i < v.size(); ++i) {
        result += v[i];
        if (i < v.size() - 1) {
            result += ", ";
        }
    }
    return result;
}
