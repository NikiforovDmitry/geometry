#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

int number_of_strings()
{
    ifstream input("input", ios::in | ios::binary);
    if (!input) {
        cout << "Error" << endl;
        return 0;
    }

    int count = 0;
    while (input.ignore(numeric_limits<streamsize>::max(), '\n')) {
        if (!input.eof())
            count++;
    }

    input.close();
    return count;
}
