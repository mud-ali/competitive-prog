#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int k,n,w;
    cin >> k >> n >> w;

    long long cost = 0;
    for (int i=1;i<=w;i++) cost += (i*k);

    long long loan = 0;
    if (cost > n) loan = cost - n;

    cout << loan << "\n";

    return 0;
}
