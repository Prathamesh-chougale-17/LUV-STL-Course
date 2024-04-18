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
    // std::vector<std::pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}}; // predefined
    // print_vector_pair(vp);
    // for taking the inputs
    // int x{0}, y{0};
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cin >> x >> y;
    //     vp.push_back({x, y});
    //     // vp.push_back(std::make_pair(x, y)); // by make_pair
    // }
    // std::cout << std::endl;
    // print_vector_pair(vp);
    // array of vector
    // std::vector<int> va[3];
    // std::cout << "Array of Vector" << std::endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     int z{0};
    //     std::cin >> z;
    //     for (int j = 0; j < z; j++)
    //     {
    //         std::cin >> x;
    //         va[i].push_back(x);
    //     }
    // }
    // va[0] = {2, 5};
    // va[1] = {5, 4, 3, 8, 4};
    // va[2] = {5, 9, 1, 2};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (auto i : va[i])
    //     {
    //         std::cout << i << "  ";
    //     }
    //     std::cout << std::endl;
    // }
    std::vector<std::vector<int>> vv;
    // input
    int N{0};
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        int t{0};
        std::cin >> t;
        std::vector<int> vt;
        for (int j = 0; j < t; j++)
        {
            int x{0};
            std::cin >> x;
            vt.push_back(x);
        }
        vv.push_back(vt);
    }
    // output
    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
        {
            std::cout << vv[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     vv.push_back(std::vector<int>());
    //     int t{0};
    //     std::cin >> t;
    //     for (int j = 0; j < t; i++)
    //     {
    //         int x{0};
    //         std::cin >> x;
    //         vv[i].push_back(x);
    //     }
    // }
}