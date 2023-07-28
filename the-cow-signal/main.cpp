#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream inp("cowsignal.in");
    int n,m,k;
    inp >> m >> n >> k;

    string row;

    ofstream outp("cowsignal.out");

    for (int i=0;i<m;i++) {
        inp >> row;

        for (int j=0;j<k;j++) {
            for (int p=0;p<n;p++) {
                for (int q=0;q<k;q++) {
                    outp << row.at(p);
                }
            }
            outp << (i!= m ? "\n" : "");
        }
    }

    inp.close();
    outp.close();

    return 0;
}
