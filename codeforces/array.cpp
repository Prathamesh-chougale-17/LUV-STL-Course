#include <iostream>
using namespace std;
/// @brief
/// @return
int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    int sum[3] = {0}, it{0}, inp{0};
    for (int i = 0; i < num; i++)
    {
        cin >> inp;
        sum[it] += inp;
        it += 1;
        if (it == 3)
            it == 0;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << sum[i] << " ";
    }
}