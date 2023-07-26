#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream in("word.in");
    ofstream out("word.out");
    
    int n, k;
    in >> n >> k;
    int ogn = n;
    int size = k;
    string word;
    while (n-- > 0) {
        in >> word;
        if (size < word.length()) {
            size = k;
            out << "\n";
        } else if (n != ogn-1) {
            out << " ";
        }
        out << word;
        size -= word.length();
    }

    in.close();
    out.close();
    return 0;
}
