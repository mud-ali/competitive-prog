#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void transfer(int* m1, int* m2, int* c1, int* c2) {
    int old = *m2;
    *m2 = min(*m1+*m2, *c2);
    *m1 -= *m2 - old;
}

int main() {
    ifstream inp("mixmilk.in");
    int c1,m1,c2,m2,c3,m3;
    inp >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
    inp.close();

    for (int i=0;i<33;i++) {
        transfer(&m1, &m2, &c1, &c2);
        transfer(&m2, &m3, &c2, &c3);
        transfer(&m3, &m1, &c3, &c1);
    }
    transfer(&m1, &m2, &c1, &c2);

    ofstream outp("mixmilk.out");
    outp << m1 << "\n" << m2 << "\n" << m3;
    outp.close();

    return 0;
}
