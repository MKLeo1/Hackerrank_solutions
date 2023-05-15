// https://www.hackerrank.com/challenges/mars-exploration/problem

#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s)
{

    int x = 0;          // number of wrong letters
    int y = s.length(); // need change array string length to int

    for (int i = 0; i < y; i += 3)
    {
        if (s[i] != 'S')
            x += 1;
        if (s[i + 1] != 'O')
            x += 1;
        if (s[i + 2] != 'S')
            x += 1;
    }
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
