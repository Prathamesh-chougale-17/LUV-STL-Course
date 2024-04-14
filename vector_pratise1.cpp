#include <bits/stdc++.h>

std::vector<int> copy_vector(std::vector<int> v)
{
    v.push_back(11);
    return v;
}
std::vector<int> reference_vector(std::vector<int> &v)
{
    v.push_back(9);
    return v;
}

void print_vector(std::vector<int> v)
{
    for (auto i : v)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    std::vector<int> v(3, 2); // vector of size 3 having value 2
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    std::vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }
    std::cout << "copy Function passing 1" << std::endl;
    // for (auto i : copy_vector(v))
    // {
    //     std::cout << i << std::endl;
    // }
    print_vector(copy_vector(v));
    std::cout << "copy Function passing 2" << std::endl;
    // for (auto i : copy_vector(v))
    // {
    //     std::cout << i << std::endl;
    // }
    print_vector(copy_vector(v));
    std::cout << "Reference Function passing 1" << std::endl;
    // for (auto i : reference_vector(v))
    // {
    //     std::cout << i << std::endl;
    // }
    print_vector(reference_vector(v));
    std::cout << "Reference Function passing 2" << std::endl;
    // for (auto i : reference_vector(v))
    // {
    //     std::cout << i << std::endl;
    // }
    print_vector(reference_vector(v));

    std::cout << "Copy of the vector" << std::endl;
    std::vector<int> v2 = v; // O(n) time required to copy
    // for (auto i : v2)
    // {
    //     std::cout << i << std::endl;
    // }
    print_vector(v2);
    std::cout << "Reference of the vector" << std::endl;
    std::vector<int> &v3 = v;
    v3.push_back(7); // created an alias of vector v;
    // for (auto i : v)
    // {
    //     std::cout << i << std::endl;
    // }
    print_vector(v);
    /*
    If you declare vector so on online compiler you cannot excede 10^5 locally and 10^7 globally
    */
}