#include <bits/stdc++.h>
int main()
{
    std::vector<int> v = {2, 4, 2, 6, 3};
    std::vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << "  ";
    }
}