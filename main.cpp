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

string check(char** mass, int string0){
int pb = 0;
    string f;
    while (mass[string0][pb] != '(') {
        f+= mass[string0][pb];
        pb++;
    }
    return f;
}



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