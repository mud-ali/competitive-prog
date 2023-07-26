#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i=0;i<n;i++) {
        int p, v, t;
        cin >> p >> v >> t;
        if (p+v+t >=2) total++;
    }
    cout << total << "\n";
    return 0;
}
