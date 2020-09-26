// Solution for average function template
#include <iostream>

// Define template for average() function
template <typename T>
T average(T x, T y)
{
    return ((x + y) / 2);
}

// Test in main() with different data types
int main()
{
    // Using deduction we can form a call to function with almost every type of data
    std::cout << average<int>(2, 3)<< "\n";
    std::cout << average<double>(double(2), double(3)) << "\n";
    std::cout << average<float>(float(2),float(3)) << "\n";
    std::cout << average<char>('Z', 'A') << "\n";
}