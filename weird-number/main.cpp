#include <iostream>
#include <string>

using namespace std;

int main() {
    long long n;
    cin >> n;
    string g = "";
    while ( n!= 1 ) {
        g += to_string(n) + " ";
        if (n%2==0) n /= 2;
        else n = (n*3)+1;
    }
    g += to_string(n);
    cout << g;
}
