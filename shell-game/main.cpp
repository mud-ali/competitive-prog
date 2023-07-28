#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream inp("shell.in");
    
    int n;
    inp >> n;

    int pointsOne = 0;
    int pointsTwo = 0;
    int pointsThree = 0;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> g(n);

    for (int i=0;i<n;i++) {
        inp >> a[i] >> b[i] >> g[i];        
    }

    inp.close();

    int maxScore = 0;
    for (int shell=1;shell<=3;shell++) {
        int score = 0;
        int location = shell;
        for (int i = 0; i < n; i++) {
            if (location == a[i]) location = b[i];
            else if (location == b[i]) location = a[i];

            if (location == g[i]) ++score;
        }
        if (score > maxScore) maxScore = score;
    }

    ofstream outp("shell.out");

    outp << maxScore;

    outp.close();
    return 0;
}
