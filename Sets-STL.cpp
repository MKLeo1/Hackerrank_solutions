// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

int main()
{
    int Q;
    std::set<int> s;
    std::cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int y, x;
        std::cin >> y >> x;
        switch (y)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
            std::cout << (s.find(x) == s.end() ? "No" : "Yes") << std::endl;
            break;
        }
    }
    return 0;
}
