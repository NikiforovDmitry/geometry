#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

string check(char** mass, int string0){
int pb = 0;
    string f;
    while (mass[string0][pb] != '(') {
        f+= mass[string0][pb];
        pb++;
    }
    return f;
}
