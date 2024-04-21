#include <bits/stdc++.h>

void print_map(std::map<int, std::string> &m)
{
    for (auto &i : m) // O(nlog(n))
    {
        std::cout << i.first << "  " << i.second << std::endl; // O(log(n))
    }
}

int main()
{
    std::map<int, std::string> m;
    m[1] = "hello"; // O(log(n))
    m[2] = "I";
    m[3] = "am";
    // m[4] = "prathamesh";
    m.insert({4, "prathamesh"});
    m[6];
    m[2] = "there, I";
    print_map(m);
    std::cout << "Find operation in Maps" << std::endl;
    auto it = m.find(3); // O(log(n))
    std::cout << it->first << "  " << it->second << std::endl;
}