#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

void findr(char** mass, int string3, float* v){
int pb3 = 7;
    string t;
    while (mass[string3][pb3] != ')') {
        t += mass[string3][pb3];
        if (mass[string3][pb3] == ' ') {
            t = "\0";
        }
        pb3++;
    }
    v[string3] = atof(t.c_str());
    
}
