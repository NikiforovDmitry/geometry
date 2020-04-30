#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

void findx1(char** mass, int string1, int* x1)
{
    int pb1 = 7;
    string s;
    while (mass[string1][pb1] != ' ') {
        s += mass[string1][pb1];
        pb1++;
    }
    x1[string1] = atoi(s.c_str());
}
