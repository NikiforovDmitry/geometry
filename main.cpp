#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i=0;
    string line;
    ifstream in("/home/dmitry/geometry/input");
    if (in.is_open())
    {
    	getline(in,line,'\n');
        while (i<line.size()) {
            cout << line[i];
            i++;
        }
    }
    in.close();
    return 0;
}