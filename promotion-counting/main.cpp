#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream inp("promote.in");

    int br0,br1,sil0,sil1,gold0,gold1,plat0,plat1;

    inp >> br0 >> br1 >> sil0 >> sil1 >> gold0 >> gold1 >> plat0 >> plat1;

    inp.close();
    ofstream out("promote.out");

    out << sil1 - sil0 + (gold1 - gold0) + (plat1 - plat0) << "\n";
    out << gold1 - gold0 + (plat1 - plat0) << endl;
    out << plat1 - plat0 << endl;

    out.close();

    return 0;
}
