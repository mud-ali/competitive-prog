#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>

using namespace std;

int main() {
    ifstream inp("speeding.in");
    int n,m;
    inp >> n >> m;

    map<int, int> roadRanges;

    int milesSoFar = 0;
    for (int i=0;i<n;i++) {
        int dist, lim;
        inp >> dist >> lim;
        roadRanges[milesSoFar+1] = lim;
        milesSoFar += dist;
    }

    for (const auto& x : roadRanges) {
        cout << x.first << " " << x.second << " |";
    }
    cout << endl;

    //reuse this variable for num miles bessie traveled
    milesSoFar = 0;
    int maxInfraction = 0;
    int lim = 0;

    for (int j=0;j<m;j++) {
        int dist, speed;
        inp >> dist >> speed;

        for (int miles=milesSoFar+1;miles<=milesSoFar+dist;miles++) {
            if (roadRanges.find(miles) != roadRanges.end()) {
                lim = roadRanges[miles];
            }

            if (speed > lim) {
                int infrac = speed - lim; 
                maxInfraction = infrac >= maxInfraction ? speed - lim : maxInfraction; 
            }
        }
        milesSoFar += dist;
    }

    inp.close();

    ofstream outp("speeding.out");
    outp << maxInfraction;
    outp.close();
    
    return 0;
}
