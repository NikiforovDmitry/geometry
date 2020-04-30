#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

void findx2(char** mass, int string2, int* x2)
{
    int pb2 = 7;
    string k;
    while (mass[string2][pb2] != ',') {
        k += mass[string2][pb2];
        if (mass[string2][pb2] == ' ') {
            k = "\0";
        }
        pb2++;
    }
    x2[string2] = atoi(k.c_str());
}

