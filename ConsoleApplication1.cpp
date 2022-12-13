#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <set>
#include <stack>
#include <deque>
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
ifstream fin("input.txt.txt");
ofstream fout("output.txt.txt");
void mySort2(int x, int y)
{
    if (x > y)
    {
        int z = 0;
        z =  x;
        x = y;
        y = z;
        return ;

    }
}
 

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    getline(fin, s);
    int val = s.find("one");
    if (val == -1) {
        fout << "Не найдено" << endl;
    }
    else {
        s.replace(s.find("one"), 3, "two");
    }
    fout << s;
    fout << "\n";
    return 0;

}










