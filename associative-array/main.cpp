#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>


using namespace std;

int main() {
    int Q;
    int a;
    string b;
    long c;

    map<string, long> list;

    cin >> Q;

    for (int i=0;i<Q;i++) {
        cin >> a >> b;
        if (a == 0) {
            cin >> c;
            list[b] = c;
        }
        else cout << list[b] << "\n"; 
    }

    return 0;
}
