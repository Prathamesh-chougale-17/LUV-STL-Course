#include <bits/stdc++.h>

int main()
{
    std::vector<int> v = {1, 4, 2, 3, 7};
    for (int value : v) // O(n) time gets allocated to copy the value in v and if we add value something then it will not affect the main vector v
    {
        std::cout << value << "  ";
        value++;
        // create an copy of v in value
    }
    std::cout << std::endl;
    for (int &value : v) // if anything changed in value that will be directly replicated to vector v
    {
        std::cout << value << "  ";
        value++;
        // it create a reference to the vector v
    }
    std::cout << std::endl;

    std::cout << "Auto" << std::endl;
    // auto guesses the datatype of the variable that we assign dynamically
    for (auto &value : v)
    {
        std::cout << value << "  ";
    }
    return 0;
}