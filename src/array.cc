#include <algorithm>
#include <array>
#include <iostream>

// A templated function that's generic over the size and type of the array.
template<typename T, std::size_t SIZE>
void print_array(const std::array<T, SIZE>& input) {
    for (const T& i : input) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    std::array<int, 5> first{ 0 };
    std::array<double, 6> second{ 0.0 };
    std::array<long, 3> third{ 0, 1, 2 };

    print_array(first);
    print_array(second);
    print_array(third);

    return 0;
}