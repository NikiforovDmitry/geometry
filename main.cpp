#include <fstream>
#include <iostream>
#include <limits>
using namespace std;
int number_of_strings();
string check(char** mass, int string0);
void findr(char** mass, int string3, float* v);
void findx1(char** mass, int string1, int* x1);
void findx2(char** mass, int string2, int* x2);

int main()
{
    const int len = 50, strings = number_of_strings();
    int* x1 = new int[strings];
    int* x2 = new int[strings];
    float* v = new float[strings];

    const char ch = '\n';
    char** mass = new char*[strings];
    for (int i = 0; i < strings; i++) {
        mass[i] = new char[len];
    }

    ifstream input("input", ios::in | ios::binary);

    for (int r = 0,i=0; r < strings; r++,i++) {
        input.getline(mass[r], len - 1, ch);
        cout  << mass[r] << endl;
        if(check(mass,i)=="circle"){
        findx1(mass, i, x1);
        findx2(mass,i,x2);
        findr(mass,i,v);
        cout << "parameter " <<2*3.14*v[i]<< endl;
        cout << "area " <<3.14*v[i]*v[i]<< endl;
    }
    else{
    	cout<<"!"<<endl;
    }
    
    }

    input.close();

    return 0;
}
