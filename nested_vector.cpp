#include <bits/stdc++.h>
void print_vector_pair(std::vector<std::pair<int, int>> &v)
{
    for (auto i : v)
    {
        std::cout << i.first << "  " << i.second << std::endl;
    }
}
int main()
{
    std::vector<std::pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}}; // predefined
    print_vector_pair(vp);
    // for taking the inputs
    int x{0}, y{0};
    for (int i = 0; i < 3; i++)
    {
        std::cin >> x >> y;
        vp.push_back({x, y});
        // vp.push_back(std::make_pair(x, y)); // by make_pair
    }
    std::cout << std::endl;
    print_vector_pair(vp);
}