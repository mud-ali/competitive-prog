#include <iostream>
#include <fstream> 
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    
    ifstream inp("paint.in");

    int a, c, b, d;
    inp >> a >> b >> c >> d;

    inp.close();

    if (a > c) {
        int temp = b;
        b = d;
        d = temp;
        temp = a;
        a = c;
        c = temp; 
    }

    ofstream out("paint.out");

    if (c < b) {
        if (d < b) {
            out << (b-a);
        } else {
            out << (d-a);
        }
    } else {
        out << ((b-a)+ (d-c));
    }

    out.close();
}
