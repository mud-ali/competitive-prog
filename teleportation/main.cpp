#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int dist(int a, int b) {
    return abs(b-a);
}

int main() {
    ifstream input("teleport.in");

    int a,b,x,y;
    input >> a >> b >> x >> y;

    input.close();

    int maxDist = dist(a,b);

    int minTel = dist(a,x) < dist(a,y) ? x : y;
    int maxTel = dist(a,x) > dist(a,y) ? x : y;

    ofstream out("teleport.out");

    if ((dist(a,minTel)+dist(maxTel,b)) < maxDist) {
        out << (dist(a,minTel)+dist(maxTel,b));
        return 0;
    }
    out << maxDist;
    return 0;
}
