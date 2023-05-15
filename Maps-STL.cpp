// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>


int main()
{
    int q, type, y;
    std::string x;

    std::cin >> q;
    std::map<std::string, int> m;
    for (int i = 0; i < q; i++)
    {
        std::cin >> type >> x;
        if (type == 1)
        {
            std::cin >> y;
            m[x] += y;
        }
        else if (type == 2)
            m.erase(x);
        else
            std::cout << m[x] << "\n";
    }
    return 0;
}
